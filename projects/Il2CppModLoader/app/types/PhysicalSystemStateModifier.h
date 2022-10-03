#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicalSystemStateModifier {
        namespace {
            app::PhysicalSystemStateModifier__Class* type_info_ref = nullptr;
        }
        app::PhysicalSystemStateModifier__Class** type_info = &type_info_ref;
        inline app::PhysicalSystemStateModifier__Class* get_class() {
            return il2cpp::get_class<app::PhysicalSystemStateModifier__Class>(type_info, "", "PhysicalSystemStateModifier");
        }
        inline app::PhysicalSystemStateModifier* create() {
            return il2cpp::create_object<app::PhysicalSystemStateModifier>(get_class());
        }
    } // namespace PhysicalSystemStateModifier
} // namespace app::classes::types
