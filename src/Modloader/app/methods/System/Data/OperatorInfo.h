#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Nodes__Enum.h>
#include <Modloader/app/structs/OperatorInfo.h>

namespace app::classes::System::Data::OperatorInfo {
    IL2CPP_REGISTER_METHOD(0x0133CEF0, void, ctor, app::OperatorInfo* this_ptr, app::Nodes__Enum type, int32_t op, int32_t pri)
}
