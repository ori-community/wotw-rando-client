#pragma once
#include <Modloader/app/structs/AttachToTransform.h>
#include <Modloader/app/structs/AttachToTransform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttachToTransform {
        inline app::AttachToTransform__Class** type_info() {
            static app::AttachToTransform__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AttachToTransform__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AttachToTransform__Class* get_class() {
            return il2cpp::get_class<app::AttachToTransform__Class>(type_info(), "", "AttachToTransform");
        }
        inline app::AttachToTransform* create() {
            return il2cpp::create_object<app::AttachToTransform>(get_class());
        }
    } // namespace AttachToTransform
} // namespace app::classes::types
