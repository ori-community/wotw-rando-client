#pragma once
#include <Modloader/app/structs/Entity_1.h>
#include <Modloader/app/structs/Entity_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Entity_1 {
        inline app::Entity_1__Class** type_info() {
            static app::Entity_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Entity_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Entity_1__Class* get_class() {
            return il2cpp::get_class<app::Entity_1__Class>(type_info(), "Moon.VisualDebug", "Entity");
        }
        inline app::Entity_1* create() {
            return il2cpp::create_object<app::Entity_1>(get_class());
        }
    } // namespace Entity_1
} // namespace app::classes::types
