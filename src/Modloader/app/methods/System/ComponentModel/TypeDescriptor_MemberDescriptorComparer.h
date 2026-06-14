#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TypeDescriptor_MemberDescriptorComparer.h>

namespace app::classes::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer {
    IL2CPP_REGISTER_METHOD(0x02957170, int32_t, Compare, app::TypeDescriptor_MemberDescriptorComparer* this_ptr, app::Object* left, app::Object* right)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TypeDescriptor_MemberDescriptorComparer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02957390, void, cctor, )
} // namespace app::classes::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer
