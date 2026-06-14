#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CachedInvokableCall_1_System_String_.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::Events::CachedInvokableCall_1_System_String_ {
    IL2CPP_REGISTER_METHOD(
        0x02AC5020,
        void,
        ctor,
        app::CachedInvokableCall_1_System_String_* this_ptr,
        app::Object_1* target,
        app::MethodInfo_1* the_function,
        app::String* argument
    )
}
