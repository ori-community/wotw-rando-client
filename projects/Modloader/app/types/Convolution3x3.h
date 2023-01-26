#pragma once
#include <Modloader/app/structs/Convolution3x3.h>
#include <Modloader/app/structs/Convolution3x3__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Convolution3x3 {
        inline app::Convolution3x3__Class** type_info() {
            static app::Convolution3x3__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Convolution3x3__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Convolution3x3__Class* get_class() {
            return il2cpp::get_class<app::Convolution3x3__Class>(type_info(), "Colorful", "Convolution3x3");
        }
        inline app::Convolution3x3* create() {
            return il2cpp::create_object<app::Convolution3x3>(get_class());
        }
    } // namespace Convolution3x3
} // namespace app::classes::types
