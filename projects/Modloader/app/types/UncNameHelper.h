#pragma once
#include <Modloader/app/structs/UncNameHelper.h>
#include <Modloader/app/structs/UncNameHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UncNameHelper {
        inline app::UncNameHelper__Class** type_info() {
            static app::UncNameHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UncNameHelper__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UncNameHelper__Class* get_class() {
            return il2cpp::get_class<app::UncNameHelper__Class>(type_info(), "System", "UncNameHelper");
        }
        inline app::UncNameHelper* create() {
            return il2cpp::create_object<app::UncNameHelper>(get_class());
        }
    } // namespace UncNameHelper
} // namespace app::classes::types
