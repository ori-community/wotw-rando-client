#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SanityResult {
    IL2CPP_REGISTER_METHOD(0x00C2ACA0, void, ctor, (app::SanityResult * this_ptr, app::String* summary, app::String* details, bool passed, app::GameObject* game_object, app::Func_2_UnityEngine_GameObject_Boolean__1* fix_function))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Summary, (app::SanityResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Details, (app::SanityResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_Passed, (app::SanityResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::GameObject*, get_GameObject, (app::SanityResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::Func_2_UnityEngine_GameObject_Boolean__1*, get_FixFunction, (app::SanityResult * this_ptr))
} // namespace app::classes::SanityResult
