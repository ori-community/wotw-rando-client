#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeyValuePair_2_System_Object_Moon_Rendering_SrpSampler___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SrpSampler.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Object_Moon_Rendering_SrpSampler_ {
    IL2CPP_REGISTER_METHOD(
        0x0014FCA0,
        void,
        ctor,
        app::KeyValuePair_2_System_Object_Moon_Rendering_SrpSampler___Boxed* this_ptr,
        app::Object* key,
        app::SrpSampler value
    )
    IL2CPP_REGISTER_METHOD(0x00107C00, app::Object*, get_Key, app::KeyValuePair_2_System_Object_Moon_Rendering_SrpSampler___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014FCD0, app::SrpSampler, get_Value, app::KeyValuePair_2_System_Object_Moon_Rendering_SrpSampler___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00151620, app::String*, ToString, app::KeyValuePair_2_System_Object_Moon_Rendering_SrpSampler___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Object_Moon_Rendering_SrpSampler_
