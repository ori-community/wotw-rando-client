#pragma once
#include <Modloader/app/structs/VarEnum__Enum.h>
#include <Modloader/app/structs/VarEnum__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VarEnum__Enum {
        inline app::VarEnum__Enum__Class** type_info() {
            static app::VarEnum__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VarEnum__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VarEnum__Enum__Class* get_class() {
            return il2cpp::get_class<app::VarEnum__Enum__Class>(type_info(), "System.Runtime.InteropServices", "VarEnum");
        }
        inline app::VarEnum__Enum* create() {
            return il2cpp::create_object<app::VarEnum__Enum>(get_class());
        }
    } // namespace VarEnum__Enum
} // namespace app::classes::types
