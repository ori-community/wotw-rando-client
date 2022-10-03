#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScaleStateModifier {
        namespace {
            app::ScaleStateModifier__Class* type_info_ref = nullptr;
        }
        app::ScaleStateModifier__Class** type_info = &type_info_ref;
        inline app::ScaleStateModifier__Class* get_class() {
            return il2cpp::get_class<app::ScaleStateModifier__Class>(type_info, "", "ScaleStateModifier");
        }
        inline app::ScaleStateModifier* create() {
            return il2cpp::create_object<app::ScaleStateModifier>(get_class());
        }
    } // namespace ScaleStateModifier
} // namespace app::classes::types
