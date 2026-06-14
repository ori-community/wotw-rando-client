#pragma once
#include <Modloader/app/structs/XdrBuilder_XdrAttributeEntry.h>
#include <Modloader/app/structs/XdrBuilder_XdrAttributeEntry__Array.h>
#include <Modloader/app/structs/XdrBuilder_XdrAttributeEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XdrBuilder_XdrAttributeEntry {
        inline app::XdrBuilder_XdrAttributeEntry__Class** type_info() {
            static app::XdrBuilder_XdrAttributeEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XdrBuilder_XdrAttributeEntry__Class**)(modloader::win::memory::resolve_rva(0x0473AC38));
            }
            return cache;
        }
        inline app::XdrBuilder_XdrAttributeEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::XdrBuilder_XdrAttributeEntry__Class>(type_info(), "System.Xml.Schema", "XdrBuilder", "XdrAttributeEntry");
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
