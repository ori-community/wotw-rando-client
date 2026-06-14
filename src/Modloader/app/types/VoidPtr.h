#pragma once
#include <Modloader/app/structs/VoidPtr.h>
#include <Modloader/app/structs/VoidPtr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VoidPtr {
        inline app::VoidPtr__Class** type_info() {
            static app::VoidPtr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VoidPtr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VoidPtr__Class* get_class() {
            return il2cpp::get_class<app::VoidPtr__Class>(type_info(), "System", "Void*");
        }
        inline app::VoidPtr* create() {
            return il2cpp::create_object<app::VoidPtr>(get_class());
        }
    } // namespace VoidPtr
} // namespace app::classes::types
