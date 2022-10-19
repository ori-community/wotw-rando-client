#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabErrorCode__Enum {
        inline app::PlayFabErrorCode__Enum__Class** type_info = (app::PlayFabErrorCode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04743648));
        inline app::PlayFabErrorCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::PlayFabErrorCode__Enum__Class>(type_info, "PlayFab", "PlayFabErrorCode");
        }
        inline app::PlayFabErrorCode__Enum* create() {
            return il2cpp::create_object<app::PlayFabErrorCode__Enum>(get_class());
        }
    } // namespace PlayFabErrorCode__Enum
} // namespace app::classes::types
