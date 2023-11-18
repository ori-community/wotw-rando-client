#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/FixedRandom.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/List_1_TargetSpheres_Sphere_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/TargetSpheres_Sphere.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions__Array.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/WormHole.h>
#include <Modloader/app/structs/WormHole__Array.h>

namespace app::classes::FixedRandom {
    IL2CPP_REGISTER_METHOD(0x02552D90, int32_t, GetSafeIndex, (int32_t index))
    IL2CPP_REGISTER_METHOD(0x02552E60, float, GetValue, (int32_t index))
    IL2CPP_REGISTER_METHOD(0x02552E60, float, ValueFromPosition, (app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x02552E60, float, ValueFromInt, (int32_t index))
    IL2CPP_REGISTER_METHOD(0x02552EB0, app::Vector2, InsideUnitCircleValuesFromPosition, (app::Vector3 position, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x02552F10, app::Vector2, InsideUnitCircleValueFromInt, (int32_t index))
    IL2CPP_REGISTER_METHOD(0x02552F70, app::Vector3, InsideUnitSphereValuesFromPosition, (app::Vector3 position, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x02552F70, app::Vector3, InsideUnitSphereValueFromInt, (int32_t index))
    IL2CPP_REGISTER_METHOD(0x02552FF0, int32_t, Range_1, (int32_t min, int32_t max, int32_t values_index, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x02552FF0, int32_t, Range_2, (int32_t min, int32_t max, app::Vector3 position, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x02553050, float, Range_3, (float min, float max, int32_t values_index, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x02553050, float, Range_4, (float min, float max, app::Vector3 position, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, IndexFromPosition, (app::Vector3 position, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateValues, ())
    IL2CPP_REGISTER_METHOD(0x02553060, void, SetFixedUpdateIndex, (int32_t index))
    IL2CPP_REGISTER_METHOD(0x02552E60, float, get_NondeterministicValue, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::FixedRandom * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02553110, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x015E83F0, app::Object*, GetRandomListItem_1, (app::List_1_System_Object_ * list, int32_t values_index))
    IL2CPP_REGISTER_METHOD(0x015E83F0, app::Object*, GetRandomListItem_2, (app::List_1_System_Object_ * list, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x015E8360, app::Object*, GetRandomArrayItem_1, (app::Object__Array * list, int32_t values_index))
    IL2CPP_REGISTER_METHOD(0x015E8360, app::Object*, GetRandomArrayItem_2, (app::Object__Array * list, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x015E8360, app::TextureAnimationWithTransitions*, GetRandomArrayItem_3, (app::TextureAnimationWithTransitions__Array * list, int32_t values_index))
    IL2CPP_REGISTER_METHOD(0x015E83F0, app::GameObject*, GetRandomListItem_3, (app::List_1_UnityEngine_GameObject_ * list, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x015E83F0, app::TargetSpheres_Sphere*, GetRandomListItem_4, (app::List_1_TargetSpheres_Sphere_ * list, int32_t values_index))
    IL2CPP_REGISTER_METHOD(0x015E8360, app::WormHole*, GetRandomArrayItem_4, (app::WormHole__Array * list, int32_t values_index))
} // namespace app::classes::FixedRandom
