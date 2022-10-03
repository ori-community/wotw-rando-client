#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConfirmChangingDifficulty {
        namespace {
            app::ConfirmChangingDifficulty__Class* type_info_ref = nullptr;
        }
        app::ConfirmChangingDifficulty__Class** type_info = &type_info_ref;
        inline app::ConfirmChangingDifficulty__Class* get_class() {
            return il2cpp::get_class<app::ConfirmChangingDifficulty__Class>(type_info, "", "ConfirmChangingDifficulty");
        }
        inline app::ConfirmChangingDifficulty* create() {
            return il2cpp::create_object<app::ConfirmChangingDifficulty>(get_class());
        }
    } // namespace ConfirmChangingDifficulty
} // namespace app::classes::types
