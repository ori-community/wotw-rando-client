#pragma once
#include <Modloader/app/structs/DisableGameObjectWithHealthWhenOutOfFrustum.h>
#include <Modloader/app/structs/DisableGameObjectWithHealthWhenOutOfFrustum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DisableGameObjectWithHealthWhenOutOfFrustum {
        inline app::DisableGameObjectWithHealthWhenOutOfFrustum__Class** type_info() {
            static app::DisableGameObjectWithHealthWhenOutOfFrustum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DisableGameObjectWithHealthWhenOutOfFrustum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DisableGameObjectWithHealthWhenOutOfFrustum__Class* get_class() {
            return il2cpp::get_class<app::DisableGameObjectWithHealthWhenOutOfFrustum__Class>(type_info(), "", "DisableGameObjectWithHealthWhenOutOfFrustum");
        }
        inline app::DisableGameObjectWithHealthWhenOutOfFrustum* create() {
            return il2cpp::create_object<app::DisableGameObjectWithHealthWhenOutOfFrustum>(get_class());
        }
    } // namespace DisableGameObjectWithHealthWhenOutOfFrustum
} // namespace app::classes::types
