#pragma once

#ifndef __INTERGEN_GENERATED__thingface_JS_H__
#define __INTERGEN_GENERATED__thingface_JS_H__

//@file Javascript interface file for thingface interface generated by intergen
//See LICENSE file for copyright and license information

#include "thingface.h"

#include <comm/intergen/ifc.js.h>
#include <comm/token.h>

namespace ifc1 {
namespace ifc2 {
namespace js {

class thingface
{
public:

    //@param scriptpath path to js script to bind to
    static iref<ifc1::ifc2::thingface> get( const script_handle& script, const coid::token& bindvar = coid::token(), v8::Handle<v8::Context>* ctx=0 )
    {
        typedef iref<ifc1::ifc2::thingface> (*fn_bind)(const script_handle&, const coid::token&, v8::Handle<v8::Context>*);
        static fn_bind binder = 0;
        static const coid::token ifckey = "ifc1::ifc2::thingface.get@creator.js";

        if (!binder)
            binder = reinterpret_cast<fn_bind>(
                coid::interface_register::get_interface_creator(ifckey));

        if (!binder)
            throw coid::exception("interface binder inaccessible: ") << ifckey;

        return binder(script, bindvar, ctx);
    }
};

} //namespace js
} //namespace
} //namespace


#endif //__INTERGEN_GENERATED__thingface_JS_H__
