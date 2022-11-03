#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::UberTransformFollow {
    IL2CPP_REGISTER_METHOD(0x0256FF30, int32_t, get_TargetCount, (app::UberTransformFollow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0256FFC0, app::Transform*, GetTarget, (app::UberTransformFollow * this_ptr, int32_t idx))
    IL2CPP_REGISTER_METHOD(0x02570090, void, ClearNullTargetsRuntime, (app::UberTransformFollow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025701C0, void, OnEnable, (app::UberTransformFollow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025703F0, void, OnDisable, (app::UberTransformFollow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025704B0, void, Awake, (app::UberTransformFollow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025708C0, void, AddTarget, (app::UberTransformFollow * this_ptr, app::Transform* target))
    IL2CPP_REGISTER_METHOD(0x02570B40, void, ClearTargets, (app::UberTransformFollow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02570C20, app::ValueTuple_2_UnityEngine_Vector3_UnityEngine_Vector3_, DoPositionAndRotation, (app::UberTransformFollow * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x025712B0, app::Vector3, DoPosition, (app::UberTransformFollow * this_ptr, float delta_time, app::Vector3 my_position, app::Vector3 avg_position))
    IL2CPP_REGISTER_METHOD(0x02571F30, app::Vector3, DoRotation, (app::UberTransformFollow * this_ptr, float delta_time, app::Vector3 my_position, app::Vector3 my_rotation, app::Vector3 avg_position, app::Vector3 avg_rotation))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EditorUpdate, (app::UberTransformFollow * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x02572720, void, RuntimeUpdate, (app::UberTransformFollow * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x02572800, float, HighestX, (app::UberTransformFollow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02572950, float, LowestX, (app::UberTransformFollow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02572AA0, float, HighestY, (app::UberTransformFollow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02572BF0, float, LowestY, (app::UberTransformFollow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02572D40, float, HighestZ, (app::UberTransformFollow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02572E90, float, LowestZ, (app::UberTransformFollow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02572FE0, float, ComputeLookRotation2D, (app::UberTransformFollow * this_ptr, app::Vector3 from, app::Vector3 to))
    IL2CPP_REGISTER_METHOD(0x02573100, app::Vector3, ComputeLookRotation3D, (app::UberTransformFollow * this_ptr, app::Vector3 from, app::Vector3 to))
    IL2CPP_REGISTER_METHOD(0x02573260, float, LinearRegressionBasedRotation2D, (app::UberTransformFollow * this_ptr, app::Vector2 average))
    IL2CPP_REGISTER_METHOD(0x02573700, void, ctor, (app::UberTransformFollow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02573870, void, cctor, ())
} // namespace app::classes::Moon::UberTransformFollow
