#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityHealthProvider {
        namespace {
            app::EntityHealthProvider__Class* type_info_ref = nullptr;
        }
        app::EntityHealthProvider__Class** type_info = &type_info_ref;
        inline app::EntityHealthProvider__Class* get_class() {
            return il2cpp::get_class<app::EntityHealthProvider__Class>(type_info, "", "EntityHealthProvider");
        }
        inline app::EntityHealthProvider* create() {
            return il2cpp::create_object<app::EntityHealthProvider>(get_class());
        }
    } // namespace EntityHealthProvider
} // namespace app::classes::types
