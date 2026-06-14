#pragma once
#include <Modloader/app/structs/CloseExState__Enum.h>
#include <Modloader/app/structs/CloseExState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CloseExState__Enum {
        inline app::CloseExState__Enum__Class** type_info() {
            static app::CloseExState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CloseExState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CloseExState__Enum__Class* get_class() {
            return il2cpp::get_class<app::CloseExState__Enum__Class>(type_info(), "System.Net", "CloseExState");
        }
        inline app::CloseExState__Enum* create() {
            return il2cpp::create_object<app::CloseExState__Enum>(get_class());
        }
    } // namespace CloseExState__Enum
} // namespace app::classes::types
