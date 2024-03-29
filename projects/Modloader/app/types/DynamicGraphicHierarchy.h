#pragma once
#include <Modloader/app/structs/DynamicGraphicHierarchy.h>
#include <Modloader/app/structs/DynamicGraphicHierarchy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicGraphicHierarchy {
        inline app::DynamicGraphicHierarchy__Class** type_info() {
            static app::DynamicGraphicHierarchy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicGraphicHierarchy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicGraphicHierarchy__Class* get_class() {
            return il2cpp::get_class<app::DynamicGraphicHierarchy__Class>(type_info(), "", "DynamicGraphicHierarchy");
        }
        inline app::DynamicGraphicHierarchy* create() {
            return il2cpp::create_object<app::DynamicGraphicHierarchy>(get_class());
        }
    } // namespace DynamicGraphicHierarchy
} // namespace app::classes::types
