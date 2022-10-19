#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FacetType__Enum {
        namespace {
            inline app::FacetType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FacetType__Enum__Class** type_info = &type_info_ref;
        inline app::FacetType__Enum__Class* get_class() {
            return il2cpp::get_class<app::FacetType__Enum__Class>(type_info, "System.Xml.Schema", "FacetType");
        }
        inline app::FacetType__Enum* create() {
            return il2cpp::create_object<app::FacetType__Enum>(get_class());
        }
    } // namespace FacetType__Enum
} // namespace app::classes::types
