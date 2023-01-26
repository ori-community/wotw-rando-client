#pragma once
#include <Modloader/app/structs/SerializedBooleanUberState__Array.h>
#include <Modloader/app/structs/SerializedBooleanUberState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializedBooleanUberState__Array {
        inline app::SerializedBooleanUberState__Array__Class** type_info() {
            static app::SerializedBooleanUberState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SerializedBooleanUberState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SerializedBooleanUberState__Array__Class* get_class() {
            return il2cpp::get_class<app::SerializedBooleanUberState__Array__Class>(type_info(), "Moon", "SerializedBooleanUberState[]");
        }
        inline app::SerializedBooleanUberState__Array* create() {
            return il2cpp::create_object<app::SerializedBooleanUberState__Array>(get_class());
        }
    } // namespace SerializedBooleanUberState__Array
} // namespace app::classes::types
