#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VideoPlayer_TimeEventHandler {
        namespace {
            inline app::VideoPlayer_TimeEventHandler__Class* type_info_ref = nullptr;
        }
        inline app::VideoPlayer_TimeEventHandler__Class** type_info = &type_info_ref;
        inline app::VideoPlayer_TimeEventHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::VideoPlayer_TimeEventHandler__Class>(type_info, "UnityEngine.Video", "VideoPlayer", "TimeEventHandler");
        }
        inline app::VideoPlayer_TimeEventHandler* create() {
            return il2cpp::create_object<app::VideoPlayer_TimeEventHandler>(get_class());
        }
    } // namespace VideoPlayer_TimeEventHandler
} // namespace app::classes::types
