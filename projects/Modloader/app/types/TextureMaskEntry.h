#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TextureMaskEntry__Class.h>
#include <Modloader/app/structs/TextureMaskEntry.h>

namespace app::classes::types {
    namespace TextureMaskEntry {
        namespace {
            inline app::TextureMaskEntry__Class* type_info_ref = nullptr;
        }
        inline app::TextureMaskEntry__Class** type_info = &type_info_ref;
        inline app::TextureMaskEntry__Class* get_class() {
            return il2cpp::get_class<app::TextureMaskEntry__Class>(type_info, "", "TextureMaskEntry");
        }
        inline app::TextureMaskEntry* create() {
            return il2cpp::create_object<app::TextureMaskEntry>(get_class());
        }
    } // namespace TextureMaskEntry
} // namespace app::classes::types
