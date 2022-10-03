#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaterialBasedResourceMap {
        namespace {
            app::MaterialBasedResourceMap__Class* type_info_ref = nullptr;
        }
        app::MaterialBasedResourceMap__Class** type_info = &type_info_ref;
        inline app::MaterialBasedResourceMap__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedResourceMap__Class>(type_info, "", "MaterialBasedResourceMap");
        }
        inline app::MaterialBasedResourceMap* create() {
            return il2cpp::create_object<app::MaterialBasedResourceMap>(get_class());
        }
    } // namespace MaterialBasedResourceMap
} // namespace app::classes::types
