#pragma once
#include <Modloader/app/structs/XdrBuilder_XdrEntry.h>
#include <Modloader/app/structs/XdrBuilder_XdrEntry__Array.h>
#include <Modloader/app/structs/XdrBuilder_XdrEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XdrBuilder_XdrEntry {
        inline app::XdrBuilder_XdrEntry__Class** type_info() {
            static app::XdrBuilder_XdrEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XdrBuilder_XdrEntry__Class**)(modloader::win::memory::resolve_rva(0x04720160));
            }
            return cache;
        }
        inline app::XdrBuilder_XdrEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::XdrBuilder_XdrEntry__Class>(type_info(), "System.Xml.Schema", "XdrBuilder", "XdrEntry");
        }
        inline app::XdrBuilder_XdrEntry* create() {
            return il2cpp::create_object<app::XdrBuilder_XdrEntry>(get_class());
        }
        inline app::XdrBuilder_XdrEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::XdrBuilder_XdrEntry__Array>(get_class(), size);
        }
        inline app::XdrBuilder_XdrEntry__Array* create_array(const std::vector<app::XdrBuilder_XdrEntry*>& items) {
            return il2cpp::array_new<app::XdrBuilder_XdrEntry__Array>(get_class(), items);
        }
    } // namespace XdrBuilder_XdrEntry
} // namespace app::classes::types
