#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/WaapiJsonClassBase_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::WaapiJsonClassBase_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00C4CBF0, app::String*, ToString, (app::WaapiJsonClassBase_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ACF3E0, app::String*, op_Implicit, (app::WaapiJsonClassBase_1_System_Object_ * obj))
    IL2CPP_REGISTER_METHOD(0x02ACF410, app::Object*, Create, (app::String * from_json))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::WaapiJsonClassBase_1_System_Object_ * this_ptr))
} // namespace app::classes::WaapiJsonClassBase_1_System_Object_
