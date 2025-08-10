#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncOperation_1.h>
#include <Modloader/app/structs/GameplaySystemsScenePreloadPrewarmOperation.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::frameworks::loading::Prewarmers::GameplaySystemsScenePreloadPrewarmOperation {
    IL2CPP_REGISTER_METHOD(0x00F5F9B0, void, ctor, app::GameplaySystemsScenePreloadPrewarmOperation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F5FA80, bool, Begin, app::GameplaySystemsScenePreloadPrewarmOperation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F5FB50, app::AsyncOperation_1*, LoadScene, app::GameplaySystemsScenePreloadPrewarmOperation* this_ptr, app::String* scene_name)
    IL2CPP_REGISTER_METHOD(0x00F5FC20, bool, Update, app::GameplaySystemsScenePreloadPrewarmOperation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, FinishImmediately, app::GameplaySystemsScenePreloadPrewarmOperation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F5D850, int32_t, DebugDrawStatus, app::GameplaySystemsScenePreloadPrewarmOperation* this_ptr, int32_t xbegin, int32_t ybegin)
} // namespace app::classes::frameworks::loading::Prewarmers::GameplaySystemsScenePreloadPrewarmOperation
