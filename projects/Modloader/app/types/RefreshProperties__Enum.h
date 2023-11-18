#pragma once
#include <Modloader/app/structs/RefreshProperties__Enum.h>
#include <Modloader/app/structs/RefreshProperties__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RefreshProperties__Enum {
        inline app::RefreshProperties__Enum__Class** type_info() {
            static app::RefreshProperties__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RefreshProperties__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RefreshProperties__Enum__Class* get_class() {
            return il2cpp::get_class<app::RefreshProperties__Enum__Class>(type_info(), "System.ComponentModel", "RefreshProperties");
        }
        inline app::RefreshProperties__Enum* create() {
            return il2cpp::create_object<app::RefreshProperties__Enum>(get_class());
        }
    } // namespace RefreshProperties__Enum
} // namespace app::classes::types
