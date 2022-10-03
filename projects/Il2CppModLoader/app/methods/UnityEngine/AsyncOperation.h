#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::AsyncOperation {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AsyncOperation_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0241E2B0, void, InternalDestroy, (void* ptr))
    IL2CPP_REGISTER_METHOD(0x0241E300, bool, get_isDone, (app::AsyncOperation_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0241E350, float, get_progress, (app::AsyncOperation_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0241E3A0, void, set_priority, (app::AsyncOperation_1 * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0241E400, void, set_allowSceneActivation, (app::AsyncOperation_1 * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0241E460, void, Finalize, (app::AsyncOperation_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0241E520, void, InvokeCompletionEvent, (app::AsyncOperation_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0241E5C0, void, add_completed, (app::AsyncOperation_1 * this_ptr, app::Action_1_UnityEngine_AsyncOperation_* value))
    IL2CPP_REGISTER_METHOD(0x0241E6F0, void, remove_completed, (app::AsyncOperation_1 * this_ptr, app::Action_1_UnityEngine_AsyncOperation_* value))
} // namespace app::classes::UnityEngine::AsyncOperation
