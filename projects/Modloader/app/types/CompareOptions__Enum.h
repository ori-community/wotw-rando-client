#pragma once
#include <Modloader/app/structs/CompareOptions__Enum.h>
#include <Modloader/app/structs/CompareOptions__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompareOptions__Enum {
        inline app::CompareOptions__Enum__Class** type_info() {
            static app::CompareOptions__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CompareOptions__Enum__Class**)(modloader::win::memory::resolve_rva(0x047340B8));
            }
            return cache;
        }
        inline app::CompareOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::CompareOptions__Enum__Class>(type_info(), "System.Globalization", "CompareOptions");
        }
        inline app::CompareOptions__Enum* create() {
            return il2cpp::create_object<app::CompareOptions__Enum>(get_class());
        }
    } // namespace CompareOptions__Enum
} // namespace app::classes::types
