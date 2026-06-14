#pragma once
#include <Modloader/app/structs/ConfirmChangingDifficulty.h>
#include <Modloader/app/structs/ConfirmChangingDifficulty__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConfirmChangingDifficulty {
        inline app::ConfirmChangingDifficulty__Class** type_info() {
            static app::ConfirmChangingDifficulty__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConfirmChangingDifficulty__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConfirmChangingDifficulty__Class* get_class() {
            return il2cpp::get_class<app::ConfirmChangingDifficulty__Class>(type_info(), "", "ConfirmChangingDifficulty");
        }
        inline app::ConfirmChangingDifficulty* create() {
            return il2cpp::create_object<app::ConfirmChangingDifficulty>(get_class());
        }
    } // namespace ConfirmChangingDifficulty
} // namespace app::classes::types
