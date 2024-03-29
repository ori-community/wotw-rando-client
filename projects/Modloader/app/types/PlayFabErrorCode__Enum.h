#pragma once
#include <Modloader/app/structs/PlayFabErrorCode__Enum.h>
#include <Modloader/app/structs/PlayFabErrorCode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabErrorCode__Enum {
        inline app::PlayFabErrorCode__Enum__Class** type_info() {
            static app::PlayFabErrorCode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabErrorCode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04743648));
            }
            return cache;
        }
        inline app::PlayFabErrorCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::PlayFabErrorCode__Enum__Class>(type_info(), "PlayFab", "PlayFabErrorCode");
        }
        inline app::PlayFabErrorCode__Enum* create() {
            return il2cpp::create_object<app::PlayFabErrorCode__Enum>(get_class());
        }
    } // namespace PlayFabErrorCode__Enum
} // namespace app::classes::types
