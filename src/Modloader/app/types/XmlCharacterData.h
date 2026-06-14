#pragma once
#include <Modloader/app/structs/XmlCharacterData.h>
#include <Modloader/app/structs/XmlCharacterData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlCharacterData {
        inline app::XmlCharacterData__Class** type_info() {
            static app::XmlCharacterData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlCharacterData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlCharacterData__Class* get_class() {
            return il2cpp::get_class<app::XmlCharacterData__Class>(type_info(), "System.Xml", "XmlCharacterData");
        }
        inline app::XmlCharacterData* create() {
            return il2cpp::create_object<app::XmlCharacterData>(get_class());
        }
    } // namespace XmlCharacterData
} // namespace app::classes::types
