#pragma once
#include <Modloader/app/structs/SerializableGenericAttribute.h>
#include <Modloader/app/structs/SerializableGenericAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializableGenericAttribute {
        inline app::SerializableGenericAttribute__Class** type_info() {
            static app::SerializableGenericAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SerializableGenericAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SerializableGenericAttribute__Class* get_class() {
            return il2cpp::get_class<app::SerializableGenericAttribute__Class>(type_info(), "UnityEngine", "SerializableGenericAttribute");
        }
        inline app::SerializableGenericAttribute* create() {
            return il2cpp::create_object<app::SerializableGenericAttribute>(get_class());
        }
    } // namespace SerializableGenericAttribute
} // namespace app::classes::types
