#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicDataLinkSerializedData__Boxed.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/Object_1.h>

namespace app::classes::Moon::DynamicDataLinkSerializedData {
    IL2CPP_REGISTER_METHOD(0x0023D100, void, ctor, (app::DynamicDataLinkSerializedData__Boxed * this_ptr, app::Object_1* target_object, app::MemberInfo_1* target_member_info))
}
