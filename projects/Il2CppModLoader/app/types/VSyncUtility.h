#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VSyncUtility {
        namespace {
            inline app::VSyncUtility__Class* type_info_ref = nullptr;
        }
        inline app::VSyncUtility__Class** type_info = &type_info_ref;
        inline app::VSyncUtility__Class* get_class() {
            return il2cpp::get_class<app::VSyncUtility__Class>(type_info, "", "VSyncUtility");
        }
        inline app::VSyncUtility* create() {
            return il2cpp::create_object<app::VSyncUtility>(get_class());
        }
    } // namespace VSyncUtility
} // namespace app::classes::types
