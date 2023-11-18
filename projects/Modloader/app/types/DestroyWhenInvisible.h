#pragma once
#include <Modloader/app/structs/DestroyWhenInvisible.h>
#include <Modloader/app/structs/DestroyWhenInvisible__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DestroyWhenInvisible {
        inline app::DestroyWhenInvisible__Class** type_info() {
            static app::DestroyWhenInvisible__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DestroyWhenInvisible__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DestroyWhenInvisible__Class* get_class() {
            return il2cpp::get_class<app::DestroyWhenInvisible__Class>(type_info(), "", "DestroyWhenInvisible");
        }
        inline app::DestroyWhenInvisible* create() {
            return il2cpp::create_object<app::DestroyWhenInvisible>(get_class());
        }
    } // namespace DestroyWhenInvisible
} // namespace app::classes::types
