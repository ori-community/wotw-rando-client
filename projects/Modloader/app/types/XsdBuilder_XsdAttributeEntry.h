#pragma once
#include <Modloader/app/structs/XsdBuilder_XsdAttributeEntry.h>
#include <Modloader/app/structs/XsdBuilder_XsdAttributeEntry__Array.h>
#include <Modloader/app/structs/XsdBuilder_XsdAttributeEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XsdBuilder_XsdAttributeEntry {
        inline app::XsdBuilder_XsdAttributeEntry__Class** type_info() {
            static app::XsdBuilder_XsdAttributeEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XsdBuilder_XsdAttributeEntry__Class**)(modloader::win::memory::resolve_rva(0x04794498));
            }
            return cache;
        }
        inline app::XsdBuilder_XsdAttributeEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::XsdBuilder_XsdAttributeEntry__Class>(type_info(), "System.Xml.Schema", "XsdBuilder", "XsdAttributeEntry");
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
