#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataContractAttribute.h>

namespace app::classes::System::Runtime::Serialization::DataContractAttribute {
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsReference, (app::DataContractAttribute * this_ptr))
}
