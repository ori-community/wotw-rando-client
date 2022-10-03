#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StateChangeProvider {
        namespace {
            app::StateChangeProvider__Class* type_info_ref = nullptr;
        }
        app::StateChangeProvider__Class** type_info = &type_info_ref;
        inline app::StateChangeProvider__Class* get_class() {
            return il2cpp::get_class<app::StateChangeProvider__Class>(type_info, "Moon", "StateChangeProvider");
        }
        inline app::StateChangeProvider* create() {
            return il2cpp::create_object<app::StateChangeProvider>(get_class());
        }
    } // namespace StateChangeProvider
} // namespace app::classes::types
