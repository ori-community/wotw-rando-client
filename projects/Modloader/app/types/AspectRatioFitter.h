#pragma once
#include <Modloader/app/structs/AspectRatioFitter.h>
#include <Modloader/app/structs/AspectRatioFitter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AspectRatioFitter {
        inline app::AspectRatioFitter__Class** type_info() {
            static app::AspectRatioFitter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AspectRatioFitter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AspectRatioFitter__Class* get_class() {
            return il2cpp::get_class<app::AspectRatioFitter__Class>(type_info(), "UnityEngine.UI", "AspectRatioFitter");
        }
        inline app::AspectRatioFitter* create() {
            return il2cpp::create_object<app::AspectRatioFitter>(get_class());
        }
    } // namespace AspectRatioFitter
} // namespace app::classes::types
