#pragma once
#include <Modloader/app/structs/ConfigXmlDocument.h>
#include <Modloader/app/structs/ConfigXmlDocument__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConfigXmlDocument {
        inline app::ConfigXmlDocument__Class** type_info() {
            static app::ConfigXmlDocument__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConfigXmlDocument__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConfigXmlDocument__Class* get_class() {
            return il2cpp::get_class<app::ConfigXmlDocument__Class>(type_info(), "System.Configuration", "ConfigXmlDocument");
        }
        inline app::ConfigXmlDocument* create() {
            return il2cpp::create_object<app::ConfigXmlDocument>(get_class());
        }
    } // namespace ConfigXmlDocument
} // namespace app::classes::types
