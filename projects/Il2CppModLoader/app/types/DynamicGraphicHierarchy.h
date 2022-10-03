#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicGraphicHierarchy {
        namespace {
            app::DynamicGraphicHierarchy__Class* type_info_ref = nullptr;
        }
        app::DynamicGraphicHierarchy__Class** type_info = &type_info_ref;
        inline app::DynamicGraphicHierarchy__Class* get_class() {
            return il2cpp::get_class<app::DynamicGraphicHierarchy__Class>(type_info, "", "DynamicGraphicHierarchy");
        }
        inline app::DynamicGraphicHierarchy* create() {
            return il2cpp::create_object<app::DynamicGraphicHierarchy>(get_class());
        }
    } // namespace DynamicGraphicHierarchy
} // namespace app::classes::types
