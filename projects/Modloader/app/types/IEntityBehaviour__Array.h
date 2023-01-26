#pragma once
#include <Modloader/app/structs/IEntityBehaviour__Array.h>
#include <Modloader/app/structs/IEntityBehaviour__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IEntityBehaviour__Array {
        inline app::IEntityBehaviour__Array__Class** type_info() {
            static app::IEntityBehaviour__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IEntityBehaviour__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IEntityBehaviour__Array__Class* get_class() {
            return il2cpp::get_class<app::IEntityBehaviour__Array__Class>(type_info(), "Moon", "IEntityBehaviour[]");
        }
        inline app::IEntityBehaviour__Array* create() {
            return il2cpp::create_object<app::IEntityBehaviour__Array>(get_class());
        }
    } // namespace IEntityBehaviour__Array
} // namespace app::classes::types
