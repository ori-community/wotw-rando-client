#pragma once
#include <Modloader/app/structs/HideFlags__Enum.h>
#include <Modloader/app/structs/HideFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HideFlags__Enum {
        inline app::HideFlags__Enum__Class** type_info() {
            static app::HideFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HideFlags__Enum__Class**)(modloader::win::memory::resolve_rva(0x04768BF0));
            }
            return cache;
        }
        inline app::HideFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::HideFlags__Enum__Class>(type_info(), "UnityEngine", "HideFlags");
        }
        inline app::HideFlags__Enum* create() {
            return il2cpp::create_object<app::HideFlags__Enum>(get_class());
        }
    } // namespace HideFlags__Enum
} // namespace app::classes::types
