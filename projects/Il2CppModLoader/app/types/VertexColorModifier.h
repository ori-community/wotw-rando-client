#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VertexColorModifier {
        namespace {
            app::VertexColorModifier__Class* type_info_ref = nullptr;
        }
        app::VertexColorModifier__Class** type_info = &type_info_ref;
        inline app::VertexColorModifier__Class* get_class() {
            return il2cpp::get_class<app::VertexColorModifier__Class>(type_info, "", "VertexColorModifier");
        }
        inline app::VertexColorModifier* create() {
            return il2cpp::create_object<app::VertexColorModifier>(get_class());
        }
    } // namespace VertexColorModifier
} // namespace app::classes::types
