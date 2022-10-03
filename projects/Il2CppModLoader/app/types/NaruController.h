#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NaruController {
        namespace {
            app::NaruController__Class* type_info_ref = nullptr;
        }
        app::NaruController__Class** type_info = &type_info_ref;
        inline app::NaruController__Class* get_class() {
            return il2cpp::get_class<app::NaruController__Class>(type_info, "", "NaruController");
        }
        inline app::NaruController* create() {
            return il2cpp::create_object<app::NaruController>(get_class());
        }
    } // namespace NaruController
} // namespace app::classes::types
