#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnumMemberAttribute.h>
#include <Modloader/app/structs/EnumUtils_c.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Newtonsoft::Json::Utilities::EnumUtils___c {
    IL2CPP_REGISTER_METHOD(0x01C11570, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::EnumUtils_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C53630, app::String*, _InitializeValuesAndNames_b__3_0, app::EnumUtils_c* this_ptr, app::EnumMemberAttribute* a)
} // namespace app::classes::Newtonsoft::Json::Utilities::EnumUtils___c
