#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemoryCaptureAgent_MemoryHeader__Enum {
        namespace {
            app::MemoryCaptureAgent_MemoryHeader__Enum__Class* type_info_ref = nullptr;
        }
        app::MemoryCaptureAgent_MemoryHeader__Enum__Class** type_info = &type_info_ref;
        inline app::MemoryCaptureAgent_MemoryHeader__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MemoryCaptureAgent_MemoryHeader__Enum__Class>(type_info, "", "MemoryCaptureAgent", "MemoryHeader");
        }
        inline app::MemoryCaptureAgent_MemoryHeader__Enum* create() {
            return il2cpp::create_object<app::MemoryCaptureAgent_MemoryHeader__Enum>(get_class());
        }
    } // namespace MemoryCaptureAgent_MemoryHeader__Enum
} // namespace app::classes::types
