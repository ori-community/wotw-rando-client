#pragma once
#include <Modloader/app/structs/ClearPolicy__Enum.h>
#include <Modloader/app/structs/ClearPolicy__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClearPolicy__Enum {
        inline app::ClearPolicy__Enum__Class** type_info() {
            static app::ClearPolicy__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ClearPolicy__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ClearPolicy__Enum__Class* get_class() {
            return il2cpp::get_class<app::ClearPolicy__Enum__Class>(type_info(), "Moon.Rendering", "ClearPolicy");
        }
        inline app::ClearPolicy__Enum* create() {
            return il2cpp::create_object<app::ClearPolicy__Enum>(get_class());
        }
    } // namespace ClearPolicy__Enum
} // namespace app::classes::types
