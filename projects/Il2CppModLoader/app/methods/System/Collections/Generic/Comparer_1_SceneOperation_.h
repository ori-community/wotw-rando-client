#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Comparer_1_SceneOperation_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_SceneOperation_ *, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02823D60, app::Comparer_1_SceneOperation_ *, Create, (app::Comparison_1_SceneOperation_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x04725CF8, Comparer_1_SceneOperation__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02823F60, app::Comparer_1_SceneOperation_ *, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x028085A0, int32_t, IComparer_Compare, (app::Comparer_1_SceneOperation_ * this_ptr, app::Object * x, app::Object * y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_SceneOperation_ * this_ptr))
}
