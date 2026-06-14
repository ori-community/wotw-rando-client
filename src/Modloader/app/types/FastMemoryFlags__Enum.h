#pragma once
#include <Modloader/app/structs/FastMemoryFlags__Enum.h>
#include <Modloader/app/structs/FastMemoryFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FastMemoryFlags__Enum {
        inline app::FastMemoryFlags__Enum__Class** type_info() {
            static app::FastMemoryFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FastMemoryFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FastMemoryFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::FastMemoryFlags__Enum__Class>(type_info(), "UnityEngine", "FastMemoryFlags");
        }
        inline app::FastMemoryFlags__Enum* create() {
            return il2cpp::create_object<app::FastMemoryFlags__Enum>(get_class());
        }
    } // namespace FastMemoryFlags__Enum
} // namespace app::classes::types
