#pragma once
#include <Modloader/app/structs/LowestDifficultyToggler.h>
#include <Modloader/app/structs/LowestDifficultyToggler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LowestDifficultyToggler {
        inline app::LowestDifficultyToggler__Class** type_info() {
            static app::LowestDifficultyToggler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LowestDifficultyToggler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LowestDifficultyToggler__Class* get_class() {
            return il2cpp::get_class<app::LowestDifficultyToggler__Class>(type_info(), "", "LowestDifficultyToggler");
        }
        inline app::LowestDifficultyToggler* create() {
            return il2cpp::create_object<app::LowestDifficultyToggler>(get_class());
        }
    } // namespace LowestDifficultyToggler
} // namespace app::classes::types
