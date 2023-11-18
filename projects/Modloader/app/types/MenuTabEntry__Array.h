#pragma once
#include <Modloader/app/structs/MenuTabEntry__Array.h>
#include <Modloader/app/structs/MenuTabEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MenuTabEntry__Array {
        inline app::MenuTabEntry__Array__Class** type_info() {
            static app::MenuTabEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MenuTabEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MenuTabEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::MenuTabEntry__Array__Class>(type_info(), "", "MenuTabEntry[]");
        }
        inline app::MenuTabEntry__Array* create() {
            return il2cpp::create_object<app::MenuTabEntry__Array>(get_class());
        }
    } // namespace MenuTabEntry__Array
} // namespace app::classes::types
