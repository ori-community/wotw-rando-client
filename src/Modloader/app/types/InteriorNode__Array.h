#pragma once
#include <Modloader/app/structs/InteriorNode__Array.h>
#include <Modloader/app/structs/InteriorNode__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteriorNode__Array {
        inline app::InteriorNode__Array__Class** type_info() {
            static app::InteriorNode__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteriorNode__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteriorNode__Array__Class* get_class() {
            return il2cpp::get_class<app::InteriorNode__Array__Class>(type_info(), "System.Xml.Schema", "InteriorNode[]");
        }
        inline app::InteriorNode__Array* create() {
            return il2cpp::create_object<app::InteriorNode__Array>(get_class());
        }
    } // namespace InteriorNode__Array
} // namespace app::classes::types
