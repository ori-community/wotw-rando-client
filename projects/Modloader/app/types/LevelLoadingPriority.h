#pragma once
#include <Modloader/app/structs/LevelLoadingPriority.h>
#include <Modloader/app/structs/LevelLoadingPriority__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LevelLoadingPriority {
        inline app::LevelLoadingPriority__Class** type_info() {
            static app::LevelLoadingPriority__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LevelLoadingPriority__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LevelLoadingPriority__Class* get_class() {
            return il2cpp::get_class<app::LevelLoadingPriority__Class>(type_info(), "", "LevelLoadingPriority");
        }
        inline app::LevelLoadingPriority* create() {
            return il2cpp::create_object<app::LevelLoadingPriority>(get_class());
        }
    } // namespace LevelLoadingPriority
} // namespace app::classes::types
