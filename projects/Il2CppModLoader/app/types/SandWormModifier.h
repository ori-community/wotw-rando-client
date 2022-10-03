#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandWormModifier {
        namespace {
            app::SandWormModifier__Class* type_info_ref = nullptr;
        }
        app::SandWormModifier__Class** type_info = &type_info_ref;
        inline app::SandWormModifier__Class* get_class() {
            return il2cpp::get_class<app::SandWormModifier__Class>(type_info, "", "SandWormModifier");
        }
        inline app::SandWormModifier* create() {
            return il2cpp::create_object<app::SandWormModifier>(get_class());
        }
    } // namespace SandWormModifier
} // namespace app::classes::types
