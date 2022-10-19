#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XsdBuilder_XsdAttributeEntry {
        inline app::XsdBuilder_XsdAttributeEntry__Class** type_info = (app::XsdBuilder_XsdAttributeEntry__Class**)(modloader::win::memory::resolve_rva(0x04794498));
        inline app::XsdBuilder_XsdAttributeEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::XsdBuilder_XsdAttributeEntry__Class>(type_info, "System.Xml.Schema", "XsdBuilder", "XsdAttributeEntry");
        }
        inline app::XsdBuilder_XsdAttributeEntry* create() {
            return il2cpp::create_object<app::XsdBuilder_XsdAttributeEntry>(get_class());
        }
        inline app::XsdBuilder_XsdAttributeEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::XsdBuilder_XsdAttributeEntry__Array>(get_class(), size);
        }
        inline app::XsdBuilder_XsdAttributeEntry__Array* create_array(const std::vector<app::XsdBuilder_XsdAttributeEntry*>& items) {
            return il2cpp::array_new<app::XsdBuilder_XsdAttributeEntry__Array>(get_class(), items);
        }
    } // namespace XsdBuilder_XsdAttributeEntry
} // namespace app::classes::types
