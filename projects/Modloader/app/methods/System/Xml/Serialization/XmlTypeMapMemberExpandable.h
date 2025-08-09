#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlTypeMapMemberExpandable.h>

namespace app::classes::System::Xml::Serialization::XmlTypeMapMemberExpandable {
    IL2CPP_REGISTER_METHOD(0x003FF8B0, int32_t, get_FlatArrayIndex, app::XmlTypeMapMemberExpandable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0E550, void, set_FlatArrayIndex, app::XmlTypeMapMemberExpandable* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0194ED90, void, ctor, app::XmlTypeMapMemberExpandable* this_ptr)
} // namespace app::classes::System::Xml::Serialization::XmlTypeMapMemberExpandable
