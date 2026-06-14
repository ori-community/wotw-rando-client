#pragma once
#include <Modloader/app/structs/VSyncUtility.h>
#include <Modloader/app/structs/VSyncUtility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VSyncUtility {
        inline app::VSyncUtility__Class** type_info() {
            static app::VSyncUtility__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VSyncUtility__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VSyncUtility__Class* get_class() {
            return il2cpp::get_class<app::VSyncUtility__Class>(type_info(), "", "VSyncUtility");
        }
        inline app::VSyncUtility* create() {
            return il2cpp::create_object<app::VSyncUtility>(get_class());
        }
    } // namespace VSyncUtility
} // namespace app::classes::types
