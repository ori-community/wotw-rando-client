#pragma once
#include <Modloader/app/structs/Image_1.h>
#include <Modloader/app/structs/Image_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Image_1 {
        inline app::Image_1__Class** type_info() {
            static app::Image_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Image_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Image_1__Class* get_class() {
            return il2cpp::get_class<app::Image_1__Class>(type_info(), "Moon.UI", "Image");
        }
        inline app::Image_1* create() {
            return il2cpp::create_object<app::Image_1>(get_class());
        }
    } // namespace Image_1
} // namespace app::classes::types
