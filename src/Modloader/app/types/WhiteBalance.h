#pragma once
#include <Modloader/app/structs/WhiteBalance.h>
#include <Modloader/app/structs/WhiteBalance__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WhiteBalance {
        inline app::WhiteBalance__Class** type_info() {
            static app::WhiteBalance__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WhiteBalance__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WhiteBalance__Class* get_class() {
            return il2cpp::get_class<app::WhiteBalance__Class>(type_info(), "Colorful", "WhiteBalance");
        }
        inline app::WhiteBalance* create() {
            return il2cpp::create_object<app::WhiteBalance>(get_class());
        }
    } // namespace WhiteBalance
} // namespace app::classes::types
