#pragma once
#include <Modloader/app/structs/IGenericUberState__Array.h>
#include <Modloader/app/structs/IGenericUberState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IGenericUberState__Array {
        inline app::IGenericUberState__Array__Class** type_info() {
            static app::IGenericUberState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IGenericUberState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IGenericUberState__Array__Class* get_class() {
            return il2cpp::get_class<app::IGenericUberState__Array__Class>(type_info(), "Moon", "IGenericUberState[]");
        }
        inline app::IGenericUberState__Array* create() {
            return il2cpp::create_object<app::IGenericUberState__Array>(get_class());
        }
    } // namespace IGenericUberState__Array
} // namespace app::classes::types
