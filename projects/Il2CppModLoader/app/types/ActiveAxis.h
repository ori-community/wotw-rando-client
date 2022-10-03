#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActiveAxis {
        namespace {
            app::ActiveAxis__Class* type_info_ref = nullptr;
        }
        app::ActiveAxis__Class** type_info = &type_info_ref;
        inline app::ActiveAxis__Class* get_class() {
            return il2cpp::get_class<app::ActiveAxis__Class>(type_info, "System.Xml.Schema", "ActiveAxis");
        }
        inline app::ActiveAxis* create() {
            return il2cpp::create_object<app::ActiveAxis>(get_class());
        }
    } // namespace ActiveAxis
} // namespace app::classes::types
