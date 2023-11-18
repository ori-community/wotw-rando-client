#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ReliabilityContractAttribute.h>
#include <Modloader/app/structs/Cer__Enum.h>
#include <Modloader/app/structs/Consistency__Enum.h>

namespace app::classes::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute {
    IL2CPP_REGISTER_METHOD(0x01857090, void, ctor, (app::ReliabilityContractAttribute * this_ptr, app::Consistency__Enum consistency_guarantee, app::Cer__Enum cer))
}
