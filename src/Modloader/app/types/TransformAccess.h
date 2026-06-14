#pragma once
#include <Modloader/app/structs/TransformAccess.h>
#include <Modloader/app/structs/TransformAccess__Boxed.h>
#include <Modloader/app/structs/TransformAccess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransformAccess {
        inline app::TransformAccess__Class** type_info() {
            static app::TransformAccess__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransformAccess__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransformAccess__Class* get_class() {
            return il2cpp::get_class<app::TransformAccess__Class>(type_info(), "UnityEngine.Jobs", "TransformAccess");
        }
        inline app::TransformAccess* create() {
            return il2cpp::create_object<app::TransformAccess>(get_class());
        }
        inline app::TransformAccess__Boxed* box(app::TransformAccess value) {
            return il2cpp::box_value<app::TransformAccess__Boxed>(get_class(), value);
        }
    } // namespace TransformAccess
} // namespace app::classes::types
