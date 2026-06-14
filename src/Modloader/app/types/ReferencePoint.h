#pragma once
#include <Modloader/app/structs/ReferencePoint.h>
#include <Modloader/app/structs/ReferencePoint__Boxed.h>
#include <Modloader/app/structs/ReferencePoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReferencePoint {
        inline app::ReferencePoint__Class** type_info() {
            static app::ReferencePoint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReferencePoint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReferencePoint__Class* get_class() {
            return il2cpp::get_class<app::ReferencePoint__Class>(type_info(), "UnityEngine.Experimental.XR", "ReferencePoint");
        }
        inline app::ReferencePoint* create() {
            return il2cpp::create_object<app::ReferencePoint>(get_class());
        }
        inline app::ReferencePoint__Boxed* box(app::ReferencePoint value) {
            return il2cpp::box_value<app::ReferencePoint__Boxed>(get_class(), value);
        }
    } // namespace ReferencePoint
} // namespace app::classes::types
