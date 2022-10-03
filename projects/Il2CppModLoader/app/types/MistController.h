#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MistController {
        namespace {
            app::MistController__Class* type_info_ref = nullptr;
        }
        app::MistController__Class** type_info = &type_info_ref;
        inline app::MistController__Class* get_class() {
            return il2cpp::get_class<app::MistController__Class>(type_info, "", "MistController");
        }
        inline app::MistController* create() {
            return il2cpp::create_object<app::MistController>(get_class());
        }
    } // namespace MistController
} // namespace app::classes::types
