#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InstanceDescriptor.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::ComponentModel::Design::Serialization::InstanceDescriptor {
    IL2CPP_REGISTER_METHOD(0x01FE4D60, void, ctor_1, (app::InstanceDescriptor * this_ptr, app::MemberInfo_1* member, app::ICollection* arguments))
    IL2CPP_REGISTER_METHOD(0x01FE4D80, void, ctor_2, (app::InstanceDescriptor * this_ptr, app::MemberInfo_1* member, app::ICollection* arguments, bool is_complete))
    IL2CPP_REGISTER_METHOD(0x01FE53F0, app::Object*, Invoke, (app::InstanceDescriptor * this_ptr))
} // namespace app::classes::System::ComponentModel::Design::Serialization::InstanceDescriptor
