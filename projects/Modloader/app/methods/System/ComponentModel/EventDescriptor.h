#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::ComponentModel::EventDescriptor {
    IL2CPP_REGISTER_METHOD(0x01FE9DF0, void, ctor_1, (app::EventDescriptor_1 * this_ptr, app::String* name, app::Attribute__Array* attrs))
    IL2CPP_REGISTER_METHOD(0x01FE9E00, void, ctor_2, (app::EventDescriptor_1 * this_ptr, app::MemberDescriptor* descr))
    IL2CPP_REGISTER_METHOD(0x01FE9E10, void, ctor_3, (app::EventDescriptor_1 * this_ptr, app::MemberDescriptor* descr, app::Attribute__Array* attrs))
} // namespace app::classes::System::ComponentModel::EventDescriptor
