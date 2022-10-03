#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NvnMemoryCaptureAgent_MemoryHeader__Enum {
        namespace {
            app::NvnMemoryCaptureAgent_MemoryHeader__Enum__Class* type_info_ref = nullptr;
        }
        app::NvnMemoryCaptureAgent_MemoryHeader__Enum__Class** type_info = &type_info_ref;
        inline app::NvnMemoryCaptureAgent_MemoryHeader__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::NvnMemoryCaptureAgent_MemoryHeader__Enum__Class>(type_info, "", "NvnMemoryCaptureAgent", "MemoryHeader");
        }
        inline app::NvnMemoryCaptureAgent_MemoryHeader__Enum* create() {
            return il2cpp::create_object<app::NvnMemoryCaptureAgent_MemoryHeader__Enum>(get_class());
        }
    } // namespace NvnMemoryCaptureAgent_MemoryHeader__Enum
} // namespace app::classes::types
