#pragma once
#include <Modloader/app/structs/DifficultyToggler.h>
#include <Modloader/app/structs/DifficultyToggler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DifficultyToggler {
        inline app::DifficultyToggler__Class** type_info() {
            static app::DifficultyToggler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DifficultyToggler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DifficultyToggler__Class* get_class() {
            return il2cpp::get_class<app::DifficultyToggler__Class>(type_info(), "", "DifficultyToggler");
        }
        inline app::DifficultyToggler* create() {
            return il2cpp::create_object<app::DifficultyToggler>(get_class());
        }
    } // namespace DifficultyToggler
} // namespace app::classes::types
