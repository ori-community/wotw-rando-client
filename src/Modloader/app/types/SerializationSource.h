#pragma once
#include <Modloader/app/structs/SerializationSource.h>
#include <Modloader/app/structs/SerializationSource__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializationSource {
        inline app::SerializationSource__Class** type_info() {
            static app::SerializationSource__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SerializationSource__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SerializationSource__Class* get_class() {
            return il2cpp::get_class<app::SerializationSource__Class>(type_info(), "System.Xml.Serialization", "SerializationSource");
        }
        inline app::SerializationSource* create() {
            return il2cpp::create_object<app::SerializationSource>(get_class());
        }
    } // namespace SerializationSource
} // namespace app::classes::types
