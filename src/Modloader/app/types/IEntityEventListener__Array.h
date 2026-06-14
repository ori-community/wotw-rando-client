#pragma once
#include <Modloader/app/structs/IEntityEventListener__Array.h>
#include <Modloader/app/structs/IEntityEventListener__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IEntityEventListener__Array {
        inline app::IEntityEventListener__Array__Class** type_info() {
            static app::IEntityEventListener__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IEntityEventListener__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IEntityEventListener__Array__Class* get_class() {
            return il2cpp::get_class<app::IEntityEventListener__Array__Class>(type_info(), "Moon", "IEntityEventListener[]");
        }
        inline app::IEntityEventListener__Array* create() {
            return il2cpp::create_object<app::IEntityEventListener__Array>(get_class());
        }
    } // namespace IEntityEventListener__Array
} // namespace app::classes::types
