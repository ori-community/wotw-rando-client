#pragma once
#include <Modloader/app/structs/RecorderIdUtility.h>
#include <Modloader/app/structs/RecorderIdUtility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecorderIdUtility {
        inline app::RecorderIdUtility__Class** type_info() {
            static app::RecorderIdUtility__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RecorderIdUtility__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RecorderIdUtility__Class* get_class() {
            return il2cpp::get_class<app::RecorderIdUtility__Class>(type_info(), "", "RecorderIdUtility");
        }
        inline app::RecorderIdUtility* create() {
            return il2cpp::create_object<app::RecorderIdUtility>(get_class());
        }
    } // namespace RecorderIdUtility
} // namespace app::classes::types
