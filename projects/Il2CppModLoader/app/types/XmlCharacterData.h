#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlCharacterData {
        namespace {
            inline app::XmlCharacterData__Class* type_info_ref = nullptr;
        }
        inline app::XmlCharacterData__Class** type_info = &type_info_ref;
        inline app::XmlCharacterData__Class* get_class() {
            return il2cpp::get_class<app::XmlCharacterData__Class>(type_info, "System.Xml", "XmlCharacterData");
        }
        inline app::XmlCharacterData* create() {
            return il2cpp::create_object<app::XmlCharacterData>(get_class());
        }
    } // namespace XmlCharacterData
} // namespace app::classes::types
