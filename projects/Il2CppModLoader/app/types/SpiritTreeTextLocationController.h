#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritTreeTextLocationController {
        namespace {
            app::SpiritTreeTextLocationController__Class* type_info_ref = nullptr;
        }
        app::SpiritTreeTextLocationController__Class** type_info = &type_info_ref;
        inline app::SpiritTreeTextLocationController__Class* get_class() {
            return il2cpp::get_class<app::SpiritTreeTextLocationController__Class>(type_info, "", "SpiritTreeTextLocationController");
        }
        inline app::SpiritTreeTextLocationController* create() {
            return il2cpp::create_object<app::SpiritTreeTextLocationController>(get_class());
        }
    } // namespace SpiritTreeTextLocationController
} // namespace app::classes::types
