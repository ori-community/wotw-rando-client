#pragma once
#include <Modloader/app/structs/ContextAttribute__Enum.h>
#include <Modloader/app/structs/ContextAttribute__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContextAttribute__Enum {
        inline app::ContextAttribute__Enum__Class** type_info() {
            static app::ContextAttribute__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ContextAttribute__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ContextAttribute__Enum__Class* get_class() {
            return il2cpp::get_class<app::ContextAttribute__Enum__Class>(type_info(), "System.Net", "ContextAttribute");
        }
        inline app::ContextAttribute__Enum* create() {
            return il2cpp::create_object<app::ContextAttribute__Enum>(get_class());
        }
    } // namespace ContextAttribute__Enum
} // namespace app::classes::types
