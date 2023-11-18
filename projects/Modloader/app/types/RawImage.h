#pragma once
#include <Modloader/app/structs/RawImage.h>
#include <Modloader/app/structs/RawImage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RawImage {
        inline app::RawImage__Class** type_info() {
            static app::RawImage__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RawImage__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RawImage__Class* get_class() {
            return il2cpp::get_class<app::RawImage__Class>(type_info(), "UnityEngine.UI", "RawImage");
        }
        inline app::RawImage* create() {
            return il2cpp::create_object<app::RawImage>(get_class());
        }
    } // namespace RawImage
} // namespace app::classes::types
