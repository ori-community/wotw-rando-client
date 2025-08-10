#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Promise_1_PromisedT_Enumerated_1_System_Object_System_Object_.h>
#include <Modloader/app/structs/Promise_1_System_Object_.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::Promise_1_PromisedT__Enumerated_1_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Object*, get_Current, app::Promise_1_PromisedT_Enumerated_1_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02A5F4B0,
        void,
        ctor,
        app::Promise_1_PromisedT_Enumerated_1_System_Object_System_Object_* this_ptr,
        app::Promise_1_System_Object_* promise,
        bool abort_on_fail
    )
    IL2CPP_REGISTER_METHOD(0x02AD1D40, bool, MoveNext, app::Promise_1_PromisedT_Enumerated_1_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Reset, app::Promise_1_PromisedT_Enumerated_1_System_Object_System_Object_* this_ptr)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::Promise_1_PromisedT__Enumerated_1_System_Object_System_Object_
