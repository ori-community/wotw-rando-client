#pragma once
#include <Modloader/app/structs/IExternallyModifiableUberState__Array.h>
#include <Modloader/app/structs/IExternallyModifiableUberState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IExternallyModifiableUberState__Array {
        inline app::IExternallyModifiableUberState__Array__Class** type_info() {
            static app::IExternallyModifiableUberState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IExternallyModifiableUberState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IExternallyModifiableUberState__Array__Class* get_class() {
            return il2cpp::get_class<app::IExternallyModifiableUberState__Array__Class>(type_info(), "Moon", "IExternallyModifiableUberState[]");
        }
        inline app::IExternallyModifiableUberState__Array* create() {
            return il2cpp::create_object<app::IExternallyModifiableUberState__Array>(get_class());
        }
    } // namespace IExternallyModifiableUberState__Array
} // namespace app::classes::types
