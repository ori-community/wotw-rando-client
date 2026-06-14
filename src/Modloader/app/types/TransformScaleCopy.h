#pragma once
#include <Modloader/app/structs/TransformScaleCopy.h>
#include <Modloader/app/structs/TransformScaleCopy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransformScaleCopy {
        inline app::TransformScaleCopy__Class** type_info() {
            static app::TransformScaleCopy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransformScaleCopy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransformScaleCopy__Class* get_class() {
            return il2cpp::get_class<app::TransformScaleCopy__Class>(type_info(), "", "TransformScaleCopy");
        }
        inline app::TransformScaleCopy* create() {
            return il2cpp::create_object<app::TransformScaleCopy>(get_class());
        }
    } // namespace TransformScaleCopy
} // namespace app::classes::types
