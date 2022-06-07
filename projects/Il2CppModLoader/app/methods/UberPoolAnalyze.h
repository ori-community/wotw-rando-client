#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberPoolAnalyze {
    IL2CPP_REGISTER_METHOD(0x00FD0010, app::FieldInfo_1__Array *, GetFields, (app::Type * t))
    IL2CPP_REGISTER_METHOD(0x00FD01D0, bool, FieldIsSafe, (app::FieldInfo_1 * field))
    IL2CPP_REGISTER_METHOD(0x00FD03B0, bool, TypeIsSafe, (app::Type * t))
    IL2CPP_REGISTER_METHOD(0x00FD05B0, void, CompareObject, (app::Object * o1, app::Object * o2, app::String * path, app::HashSet_1_System_Object_ * visited, app::HashSet_1_UnityEngine_GameObject_ * total, int32_t depth))
    IL2CPP_REGISTER_METHOD(0x00FD11E0, void, CompareGameObject, (app::GameObject * go1, app::GameObject * go2, app::HashSet_1_System_Object_ * visited, app::HashSet_1_UnityEngine_GameObject_ * total, app::String * path))
    IL2CPP_REGISTER_METHOD(0x00FD1840, void, CompareFullHierarchies, (app::GameObject * a, app::GameObject * b, app::HashSet_1_System_Object_ * visited, app::String * path))
    IL2CPP_REGISTER_METHOD(0x00FD2220, void, AddRecursive, (app::GameObject * game_object, app::HashSet_1_UnityEngine_GameObject_ * total))
    IL2CPP_REGISTER_METHOD(0x00FD24E0, void, Analyze, (app::GameObject * pooled_obj, app::GameObject * original))
    IL2CPP_REGISTER_METHOD(0x00FD2890, void, cctor, ())
}
