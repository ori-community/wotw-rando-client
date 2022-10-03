#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VSyncUtility {
        namespace {
            app::VSyncUtility__Class* type_info_ref = nullptr;
        }
        app::VSyncUtility__Class** type_info = &type_info_ref;
        inline app::VSyncUtility__Class* get_class() {
            return il2cpp::get_class<app::VSyncUtility__Class>(type_info, "", "VSyncUtility");
        }
        inline app::VSyncUtility* create() {
            return il2cpp::create_object<app::VSyncUtility>(get_class());
        }
    } // namespace VSyncUtility
} // namespace app::classes::types
