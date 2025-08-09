#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Predicate_1_Moon_Vitals_DamageProcessHelper_DamageBucket_.h>
#include <Modloader/app/structs/Vitals_DamageProcessHelper_DamageBucket.h>

namespace app::classes::System::Predicate_1_Moon_Vitals_DamageProcessHelper_DamageBucket_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::Predicate_1_Moon_Vitals_DamageProcessHelper_DamageBucket_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x0288E680,
        bool,
        Invoke,
        app::Predicate_1_Moon_Vitals_DamageProcessHelper_DamageBucket_* this_ptr,
        app::Vitals_DamageProcessHelper_DamageBucket obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02A4F0A0,
        app::IAsyncResult*,
        BeginInvoke,
        app::Predicate_1_Moon_Vitals_DamageProcessHelper_DamageBucket_* this_ptr,
        app::Vitals_DamageProcessHelper_DamageBucket obj,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, app::Predicate_1_Moon_Vitals_DamageProcessHelper_DamageBucket_* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Predicate_1_Moon_Vitals_DamageProcessHelper_DamageBucket_
