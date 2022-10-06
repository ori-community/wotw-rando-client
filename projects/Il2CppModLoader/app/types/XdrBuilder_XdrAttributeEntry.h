#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XdrBuilder_XdrAttributeEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XdrBuilder_XdrAttributeEntry__Class** type_info;
        inline app::XdrBuilder_XdrAttributeEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::XdrBuilder_XdrAttributeEntry__Class>(type_info, "System.Xml.Schema", "XdrBuilder", "XdrAttributeEntry");
        }
        inline app::XdrBuilder_XdrAttributeEntry* create() {
            return il2cpp::create_object<app::XdrBuilder_XdrAttributeEntry>(get_class());
        }
        inline app::XdrBuilder_XdrAttributeEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::XdrBuilder_XdrAttributeEntry__Array>(get_class(), size);
        }
        inline app::XdrBuilder_XdrAttributeEntry__Array* create_array(const std::vector<app::XdrBuilder_XdrAttributeEntry*>& items) {
            return il2cpp::array_new<app::XdrBuilder_XdrAttributeEntry__Array>(get_class(), items);
        }
    } // namespace XdrBuilder_XdrAttributeEntry
} // namespace app::classes::types
