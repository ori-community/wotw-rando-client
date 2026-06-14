#pragma once
#include <Modloader/app/structs/SwimBoostHelper.h>
#include <Modloader/app/structs/SwimBoostHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwimBoostHelper {
        inline app::SwimBoostHelper__Class** type_info() {
            static app::SwimBoostHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwimBoostHelper__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwimBoostHelper__Class* get_class() {
            return il2cpp::get_class<app::SwimBoostHelper__Class>(type_info(), "", "SwimBoostHelper");
        }
        inline app::SwimBoostHelper* create() {
            return il2cpp::create_object<app::SwimBoostHelper>(get_class());
        }
    } // namespace SwimBoostHelper
} // namespace app::classes::types
