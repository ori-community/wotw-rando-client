#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Glitch {
        namespace {
            app::Glitch__Class* type_info_ref = nullptr;
        }
        app::Glitch__Class** type_info = &type_info_ref;
        inline app::Glitch__Class* get_class() {
            return il2cpp::get_class<app::Glitch__Class>(type_info, "Colorful", "Glitch");
        }
        inline app::Glitch* create() {
            return il2cpp::create_object<app::Glitch>(get_class());
        }
    } // namespace Glitch
} // namespace app::classes::types
