#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LegacyUberTransformFollow.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>

namespace app::classes::LegacyUberTransformFollow {
    IL2CPP_REGISTER_METHOD(0x0112D350, void, Awake, (app::LegacyUberTransformFollow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0112D4E0, void, Update, (app::LegacyUberTransformFollow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0112D800, void, ProcessPosition, (app::LegacyUberTransformFollow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0112DC10, void, ProcessLocks, (app::LegacyUberTransformFollow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0112DE60, void, ValidateList, (app::LegacyUberTransformFollow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0112DF80, void, ProcessFollowModifierX, (app::LegacyUberTransformFollow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0112DFD0, void, ProcessFollowModifierY, (app::LegacyUberTransformFollow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0112E020, void, ProcessFollowModifierZ, (app::LegacyUberTransformFollow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0112E070, app::Vector3, MidPoint, (app::LegacyUberTransformFollow * this_ptr, app::List_1_UnityEngine_Transform_** targets))
    IL2CPP_REGISTER_METHOD(0x0112E390, float, HighestX, (app::LegacyUberTransformFollow * this_ptr, app::List_1_UnityEngine_Transform_** targets))
    IL2CPP_REGISTER_METHOD(0x0112E550, float, LowestX, (app::LegacyUberTransformFollow * this_ptr, app::List_1_UnityEngine_Transform_** targets))
    IL2CPP_REGISTER_METHOD(0x0112E710, float, HighestY, (app::LegacyUberTransformFollow * this_ptr, app::List_1_UnityEngine_Transform_** targets))
    IL2CPP_REGISTER_METHOD(0x0112E8D0, float, LowestY, (app::LegacyUberTransformFollow * this_ptr, app::List_1_UnityEngine_Transform_** targets))
    IL2CPP_REGISTER_METHOD(0x0112EA90, float, HighestZ, (app::LegacyUberTransformFollow * this_ptr, app::List_1_UnityEngine_Transform_** targets))
    IL2CPP_REGISTER_METHOD(0x0112EC50, float, LowestZ, (app::LegacyUberTransformFollow * this_ptr, app::List_1_UnityEngine_Transform_** targets))
    IL2CPP_REGISTER_METHOD(0x0112EE10, void, ProcessRotation, (app::LegacyUberTransformFollow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0112F660, float, ComputeAvgRotation2D, (app::LegacyUberTransformFollow * this_ptr, app::List_1_UnityEngine_Transform_** targets))
    IL2CPP_REGISTER_METHOD(0x0112F800, app::Vector3, ComputeAvgRotation3D, (app::LegacyUberTransformFollow * this_ptr, app::List_1_UnityEngine_Transform_** targets))
    IL2CPP_REGISTER_METHOD(0x0112FAC0, float, ComputeLookRotation2D, (app::LegacyUberTransformFollow * this_ptr, app::Vector3 from, app::Vector3 to))
    IL2CPP_REGISTER_METHOD(0x0112FBE0, app::Vector3, ComputeLookRotation3D, (app::LegacyUberTransformFollow * this_ptr, app::Vector3 from, app::Vector3 to))
    IL2CPP_REGISTER_METHOD(0x0112FD40, float, LinearRegressionBasedRotation2D, (app::LegacyUberTransformFollow * this_ptr, app::List_1_UnityEngine_Transform_** targets))
    IL2CPP_REGISTER_METHOD(0x01130370, void, ctor, (app::LegacyUberTransformFollow * this_ptr))
} // namespace app::classes::LegacyUberTransformFollow
