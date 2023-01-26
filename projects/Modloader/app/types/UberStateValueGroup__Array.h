#pragma once
#include <Modloader/app/structs/UberStateValueGroup__Array.h>
#include <Modloader/app/structs/UberStateValueGroup__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateValueGroup__Array {
        inline app::UberStateValueGroup__Array__Class** type_info() {
            static app::UberStateValueGroup__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberStateValueGroup__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberStateValueGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::UberStateValueGroup__Array__Class>(type_info(), "Moon", "UberStateValueGroup[]");
        }
        inline app::UberStateValueGroup__Array* create() {
            return il2cpp::create_object<app::UberStateValueGroup__Array>(get_class());
        }
    } // namespace UberStateValueGroup__Array
} // namespace app::classes::types
