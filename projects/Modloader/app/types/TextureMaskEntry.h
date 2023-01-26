#pragma once
#include <Modloader/app/structs/TextureMaskEntry.h>
#include <Modloader/app/structs/TextureMaskEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextureMaskEntry {
        inline app::TextureMaskEntry__Class** type_info() {
            static app::TextureMaskEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextureMaskEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextureMaskEntry__Class* get_class() {
            return il2cpp::get_class<app::TextureMaskEntry__Class>(type_info(), "", "TextureMaskEntry");
        }
        inline app::TextureMaskEntry* create() {
            return il2cpp::create_object<app::TextureMaskEntry>(get_class());
        }
    } // namespace TextureMaskEntry
} // namespace app::classes::types
