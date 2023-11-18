#pragma once
#include <Modloader/app/structs/CompareFunction__Enum.h>
#include <Modloader/app/structs/CompareFunction__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompareFunction__Enum {
        inline app::CompareFunction__Enum__Class** type_info() {
            static app::CompareFunction__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CompareFunction__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475EF98));
            }
            return cache;
        }
        inline app::CompareFunction__Enum__Class* get_class() {
            return il2cpp::get_class<app::CompareFunction__Enum__Class>(type_info(), "UnityEngine.Rendering", "CompareFunction");
        }
        inline app::CompareFunction__Enum* create() {
            return il2cpp::create_object<app::CompareFunction__Enum>(get_class());
        }
    } // namespace CompareFunction__Enum
} // namespace app::classes::types
