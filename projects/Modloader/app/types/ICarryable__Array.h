#pragma once
#include <Modloader/app/structs/ICarryable__Array.h>
#include <Modloader/app/structs/ICarryable__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICarryable__Array {
        inline app::ICarryable__Array__Class** type_info() {
            static app::ICarryable__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ICarryable__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ICarryable__Array__Class* get_class() {
            return il2cpp::get_class<app::ICarryable__Array__Class>(type_info(), "", "ICarryable[]");
        }
        inline app::ICarryable__Array* create() {
            return il2cpp::create_object<app::ICarryable__Array>(get_class());
        }
    } // namespace ICarryable__Array
} // namespace app::classes::types
