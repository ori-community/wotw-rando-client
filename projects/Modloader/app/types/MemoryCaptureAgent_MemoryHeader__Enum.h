#pragma once
#include <Modloader/app/structs/MemoryCaptureAgent_MemoryHeader__Enum.h>
#include <Modloader/app/structs/MemoryCaptureAgent_MemoryHeader__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemoryCaptureAgent_MemoryHeader__Enum {
        inline app::MemoryCaptureAgent_MemoryHeader__Enum__Class** type_info() {
            static app::MemoryCaptureAgent_MemoryHeader__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MemoryCaptureAgent_MemoryHeader__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MemoryCaptureAgent_MemoryHeader__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MemoryCaptureAgent_MemoryHeader__Enum__Class>(type_info(), "", "MemoryCaptureAgent", "MemoryHeader");
        }
        inline app::MemoryCaptureAgent_MemoryHeader__Enum* create() {
            return il2cpp::create_object<app::MemoryCaptureAgent_MemoryHeader__Enum>(get_class());
        }
    } // namespace MemoryCaptureAgent_MemoryHeader__Enum
} // namespace app::classes::types
