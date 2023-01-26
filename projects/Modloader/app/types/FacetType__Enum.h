#pragma once
#include <Modloader/app/structs/FacetType__Enum.h>
#include <Modloader/app/structs/FacetType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FacetType__Enum {
        inline app::FacetType__Enum__Class** type_info() {
            static app::FacetType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FacetType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FacetType__Enum__Class* get_class() {
            return il2cpp::get_class<app::FacetType__Enum__Class>(type_info(), "System.Xml.Schema", "FacetType");
        }
        inline app::FacetType__Enum* create() {
            return il2cpp::create_object<app::FacetType__Enum>(get_class());
        }
    } // namespace FacetType__Enum
} // namespace app::classes::types
