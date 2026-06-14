#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonObjectAttribute.h>
#include <Modloader/app/structs/MemberSerialization__Enum.h>

namespace app::classes::Newtonsoft::Json::JsonObjectAttribute {
    IL2CPP_REGISTER_METHOD(0x002FD490, app::MemberSerialization__Enum, get_MemberSerialization, app::JsonObjectAttribute* this_ptr)
}
