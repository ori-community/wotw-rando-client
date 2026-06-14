#pragma once
#include <Modloader/app/structs/UnsortedHelper.h>
#include <Modloader/app/structs/UnsortedHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnsortedHelper {
        inline app::UnsortedHelper__Class** type_info() {
            static app::UnsortedHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnsortedHelper__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnsortedHelper__Class* get_class() {
            return il2cpp::get_class<app::UnsortedHelper__Class>(type_info(), "", "UnsortedHelper");
        }
        inline app::UnsortedHelper* create() {
            return il2cpp::create_object<app::UnsortedHelper>(get_class());
        }
    } // namespace UnsortedHelper
} // namespace app::classes::types
