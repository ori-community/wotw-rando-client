#pragma once
#include <Modloader/app/structs/UIntPtr__Array.h>
#include <Modloader/app/structs/UIntPtr__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UIntPtr__Array {
        inline app::UIntPtr__Array__Class** type_info() {
            static app::UIntPtr__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UIntPtr__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UIntPtr__Array__Class* get_class() {
            return il2cpp::get_class<app::UIntPtr__Array__Class>(type_info(), "System", "UIntPtr[]");
        }
        inline app::UIntPtr__Array* create() {
            return il2cpp::create_object<app::UIntPtr__Array>(get_class());
        }
    } // namespace UIntPtr__Array
} // namespace app::classes::types
