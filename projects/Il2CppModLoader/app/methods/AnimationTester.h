#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AnimationTester {
    IL2CPP_REGISTER_METHOD(0x01AFB1B0, float, get_ChangeAnimationInterval, (app::AnimationTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AFB1D0, void, Awake, (app::AnimationTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AFB200, void, Update, (app::AnimationTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AFB280, void, PlayNext, (app::AnimationTester * this_ptr, int32_t amount_of_layers))
    IL2CPP_REGISTER_METHOD(0x01AFB300, void, PrintNumberOfBones, (app::AnimationTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AFB4E0, int32_t, HierarchySize, (app::AnimationTester * this_ptr, app::Transform* transform))
    IL2CPP_REGISTER_METHOD(0x01AFB5E0, void, DuplicateEntries, (app::AnimationTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AFBB30, void, PopulateEntries, (app::AnimationTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AFC230, void, UpdateGroups, (app::AnimationTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AFCC70, void, InitUiElements, (app::AnimationTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AFD2E0, void, OnGUI, (app::AnimationTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AFD6F0, void, ctor, (app::AnimationTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004E57B0, void, _InitUiElements_b__24_0, (app::AnimationTester * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHODINFO(0x0478C6F8, AnimationTester__InitUiElements_b__24_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, _InitUiElements_b__24_1, (app::AnimationTester * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047271C0, AnimationTester__InitUiElements_b__24_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C08D30, void, _InitUiElements_b__24_2, (app::AnimationTester * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHODINFO(0x0477B560, AnimationTester__InitUiElements_b__24_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0057AAC0, int32_t, _InitUiElements_b__24_3, (app::AnimationTester * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472EDC0, AnimationTester__InitUiElements_b__24_3__MethodInfo)
} // namespace app::classes::AnimationTester
