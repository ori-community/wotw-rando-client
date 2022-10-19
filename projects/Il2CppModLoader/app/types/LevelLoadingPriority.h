#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LevelLoadingPriority {
        namespace {
            inline app::LevelLoadingPriority__Class* type_info_ref = nullptr;
        }
        inline app::LevelLoadingPriority__Class** type_info = &type_info_ref;
        inline app::LevelLoadingPriority__Class* get_class() {
            return il2cpp::get_class<app::LevelLoadingPriority__Class>(type_info, "", "LevelLoadingPriority");
        }
        inline app::LevelLoadingPriority* create() {
            return il2cpp::create_object<app::LevelLoadingPriority>(get_class());
        }
    } // namespace LevelLoadingPriority
} // namespace app::classes::types
