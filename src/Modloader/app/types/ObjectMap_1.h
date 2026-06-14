#pragma once
#include <Modloader/app/structs/ObjectMap_1.h>
#include <Modloader/app/structs/ObjectMap_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectMap_1 {
        inline app::ObjectMap_1__Class** type_info() {
            static app::ObjectMap_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ObjectMap_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ObjectMap_1__Class* get_class() {
            return il2cpp::get_class<app::ObjectMap_1__Class>(type_info(), "System.Xml.Serialization", "ObjectMap");
        }
        inline app::ObjectMap_1* create() {
            return il2cpp::create_object<app::ObjectMap_1>(get_class());
        }
    } // namespace ObjectMap_1
} // namespace app::classes::types
