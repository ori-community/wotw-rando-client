#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/fsOption_1_System_Object_.h>
#include <Modloader/app/structs/fsOption_1_fsVersionedType_.h>
#include <Modloader/app/structs/fsVersionedType.h>

namespace app::classes::FullSerializer::Internal::fsOption {
    IL2CPP_REGISTER_METHOD(0x018EA340, app::fsOption_1_System_Object_, Just_1, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x018EA310, app::fsOption_1_fsVersionedType_, Just_2, app::fsVersionedType value)
} // namespace app::classes::FullSerializer::Internal::fsOption
