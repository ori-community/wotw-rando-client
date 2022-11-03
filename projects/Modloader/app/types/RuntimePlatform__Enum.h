#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimePlatform__Enum {
        inline app::RuntimePlatform__Enum__Class** type_info = (app::RuntimePlatform__Enum__Class**)(modloader::win::memory::resolve_rva(0x04735F10));
        inline app::RuntimePlatform__Enum__Class* get_class() {
            return il2cpp::get_class<app::RuntimePlatform__Enum__Class>(type_info, "UnityEngine", "RuntimePlatform");
        }
        inline app::RuntimePlatform__Enum* create() {
            return il2cpp::create_object<app::RuntimePlatform__Enum>(get_class());
        }
    } // namespace RuntimePlatform__Enum
} // namespace app::classes::types
