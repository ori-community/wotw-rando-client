#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/fsConfig_c.h>

namespace app::classes::FullSerializer::fsConfig___c {
    IL2CPP_REGISTER_METHOD(0x015095A0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::fsConfig_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00502220, app::String*, __ctor_b__11_0, app::fsConfig_c* this_ptr, app::String* name, app::MemberInfo_1* info)
} // namespace app::classes::FullSerializer::fsConfig___c
