#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConfigXmlDocument {
        namespace {
            inline app::ConfigXmlDocument__Class* type_info_ref = nullptr;
        }
        inline app::ConfigXmlDocument__Class** type_info = &type_info_ref;
        inline app::ConfigXmlDocument__Class* get_class() {
            return il2cpp::get_class<app::ConfigXmlDocument__Class>(type_info, "System.Configuration", "ConfigXmlDocument");
        }
        inline app::ConfigXmlDocument* create() {
            return il2cpp::create_object<app::ConfigXmlDocument>(get_class());
        }
    } // namespace ConfigXmlDocument
} // namespace app::classes::types
