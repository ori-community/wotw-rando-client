#pragma once
#include <Modloader/app/structs/Primitive.h>
#include <Modloader/app/structs/Primitive__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Primitive {
        inline app::Primitive__Class** type_info() {
            static app::Primitive__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Primitive__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Primitive__Class* get_class() {
            return il2cpp::get_class<app::Primitive__Class>(type_info(), "Moon", "Primitive");
        }
        inline app::Primitive* create() {
            return il2cpp::create_object<app::Primitive>(get_class());
        }
    } // namespace Primitive
} // namespace app::classes::types
