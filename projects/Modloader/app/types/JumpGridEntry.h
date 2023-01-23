#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JumpGridEntry__Class.h>
#include <Modloader/app/structs/JumpGridEntry.h>

namespace app::classes::types {
    namespace JumpGridEntry {
        inline app::JumpGridEntry__Class** type_info = (app::JumpGridEntry__Class**)(modloader::win::memory::resolve_rva(0x047961C0));
        inline app::JumpGridEntry__Class* get_class() {
            return il2cpp::get_class<app::JumpGridEntry__Class>(type_info, "", "JumpGridEntry");
        }
        inline app::JumpGridEntry* create() {
            return il2cpp::create_object<app::JumpGridEntry>(get_class());
        }
    } // namespace JumpGridEntry
} // namespace app::classes::types
