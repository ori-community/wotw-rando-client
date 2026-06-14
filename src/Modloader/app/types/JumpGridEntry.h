#pragma once
#include <Modloader/app/structs/JumpGridEntry.h>
#include <Modloader/app/structs/JumpGridEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumpGridEntry {
        inline app::JumpGridEntry__Class** type_info() {
            static app::JumpGridEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JumpGridEntry__Class**)(modloader::win::memory::resolve_rva(0x047961C0));
            }
            return cache;
        }
        inline app::JumpGridEntry__Class* get_class() {
            return il2cpp::get_class<app::JumpGridEntry__Class>(type_info(), "", "JumpGridEntry");
        }
        inline app::JumpGridEntry* create() {
            return il2cpp::create_object<app::JumpGridEntry>(get_class());
        }
    } // namespace JumpGridEntry
} // namespace app::classes::types
