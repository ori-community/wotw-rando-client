#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MemoryUISlot__Class.h>
#include <Modloader/app/structs/MemoryUISlot.h>

namespace app::classes::types {
    namespace MemoryUISlot {
        namespace {
            inline app::MemoryUISlot__Class* type_info_ref = nullptr;
        }
        inline app::MemoryUISlot__Class** type_info = &type_info_ref;
        inline app::MemoryUISlot__Class* get_class() {
            return il2cpp::get_class<app::MemoryUISlot__Class>(type_info, "", "MemoryUISlot");
        }
        inline app::MemoryUISlot* create() {
            return il2cpp::create_object<app::MemoryUISlot>(get_class());
        }
    } // namespace MemoryUISlot
} // namespace app::classes::types
