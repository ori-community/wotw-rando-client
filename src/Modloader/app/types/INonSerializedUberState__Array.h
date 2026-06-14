#pragma once
#include <Modloader/app/structs/INonSerializedUberState__Array.h>
#include <Modloader/app/structs/INonSerializedUberState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace INonSerializedUberState__Array {
        inline app::INonSerializedUberState__Array__Class** type_info() {
            static app::INonSerializedUberState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::INonSerializedUberState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::INonSerializedUberState__Array__Class* get_class() {
            return il2cpp::get_class<app::INonSerializedUberState__Array__Class>(type_info(), "Moon", "INonSerializedUberState[]");
        }
        inline app::INonSerializedUberState__Array* create() {
            return il2cpp::create_object<app::INonSerializedUberState__Array>(get_class());
        }
    } // namespace INonSerializedUberState__Array
} // namespace app::classes::types
