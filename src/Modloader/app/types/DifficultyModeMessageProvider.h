#pragma once
#include <Modloader/app/structs/DifficultyModeMessageProvider.h>
#include <Modloader/app/structs/DifficultyModeMessageProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DifficultyModeMessageProvider {
        inline app::DifficultyModeMessageProvider__Class** type_info() {
            static app::DifficultyModeMessageProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DifficultyModeMessageProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DifficultyModeMessageProvider__Class* get_class() {
            return il2cpp::get_class<app::DifficultyModeMessageProvider__Class>(type_info(), "", "DifficultyModeMessageProvider");
        }
        inline app::DifficultyModeMessageProvider* create() {
            return il2cpp::create_object<app::DifficultyModeMessageProvider>(get_class());
        }
    } // namespace DifficultyModeMessageProvider
} // namespace app::classes::types
