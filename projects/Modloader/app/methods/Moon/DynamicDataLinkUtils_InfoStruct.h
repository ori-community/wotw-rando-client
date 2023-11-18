#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicDataLinkUtils_InfoStruct__Boxed.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Moon::DynamicDataLinkUtils_InfoStruct {
    IL2CPP_REGISTER_METHOD(0x00110270, void, ctor, (app::DynamicDataLinkUtils_InfoStruct__Boxed * this_ptr, app::MemberInfo_1* member_info, app::Type* type))
}
