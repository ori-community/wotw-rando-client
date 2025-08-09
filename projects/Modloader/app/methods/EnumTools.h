#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConstraintFlag__Enum.h>
#include <Modloader/app/structs/DesertEscapeWorm_States__Enum.h>
#include <Modloader/app/structs/FixedDurationSceneEntity_Markers__Enum.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>

namespace app::classes::EnumTools {
    IL2CPP_REGISTER_METHOD(0x02552CE0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x018F2740, bool, HasFlagUnsafe_1, app::ConstraintFlag__Enum lhs, app::ConstraintFlag__Enum rhs)
    IL2CPP_REGISTER_METHOD(0x02654A70, int32_t, AsInt_1, app::DesertEscapeWorm_States__Enum lhs)
    IL2CPP_REGISTER_METHOD(0x02654A70, int32_t, AsInt_2, app::FixedDurationSceneEntity_Markers__Enum lhs)
    IL2CPP_REGISTER_METHOD(0x018F2740, bool, HasFlagUnsafe_2, app::Int32Enum__Enum lhs, app::Int32Enum__Enum rhs)
    IL2CPP_REGISTER_METHOD(0x0156B3E0, uint8_t, AsByte, app::Int32Enum__Enum t)
    IL2CPP_REGISTER_METHOD(0x02654A70, int32_t, AsInt_3, app::Int32Enum__Enum lhs)
    IL2CPP_REGISTER_METHOD(0x01547930, int32_t, AsIntInternal, app::Int32Enum__Enum t)
    IL2CPP_REGISTER_METHOD(0x01547930, uint32_t, AsUInt, app::Int32Enum__Enum t)
    IL2CPP_REGISTER_METHOD(0x01547960, uint64_t, AsULong, app::Int32Enum__Enum t)
} // namespace app::classes::EnumTools
