#pragma once
#include <Modloader/app/structs/Sharpen.h>
#include <Modloader/app/structs/Sharpen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Sharpen {
        inline app::Sharpen__Class** type_info() {
            static app::Sharpen__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Sharpen__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Sharpen__Class* get_class() {
            return il2cpp::get_class<app::Sharpen__Class>(type_info(), "Colorful", "Sharpen");
        }
        inline app::Sharpen* create() {
            return il2cpp::create_object<app::Sharpen>(get_class());
        }
    } // namespace Sharpen
} // namespace app::classes::types
