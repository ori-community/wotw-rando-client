#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WeightController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WeightController__Class** type_info;
        inline app::WeightController__Class* get_class() {
            return il2cpp::get_class<app::WeightController__Class>(type_info, "", "WeightController");
        }
        inline app::WeightController* create() {
            return il2cpp::create_object<app::WeightController>(get_class());
        }
    } // namespace WeightController
} // namespace app::classes::types
