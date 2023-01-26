#pragma once
#include <Modloader/app/structs/RuntimePlatform__Enum.h>
#include <Modloader/app/structs/RuntimePlatform__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimePlatform__Enum {
        inline app::RuntimePlatform__Enum__Class** type_info() {
            static app::RuntimePlatform__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RuntimePlatform__Enum__Class**)(modloader::win::memory::resolve_rva(0x04735F10));
            }
            return cache;
        }
        inline app::RuntimePlatform__Enum__Class* get_class() {
            return il2cpp::get_class<app::RuntimePlatform__Enum__Class>(type_info(), "UnityEngine", "RuntimePlatform");
        }
        inline app::RuntimePlatform__Enum* create() {
            return il2cpp::create_object<app::RuntimePlatform__Enum>(get_class());
        }
    } // namespace RuntimePlatform__Enum
} // namespace app::classes::types
