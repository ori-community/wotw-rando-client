#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CC_Base {
        namespace {
            inline app::CC_Base__Class* type_info_ref = nullptr;
        }
        inline app::CC_Base__Class** type_info = &type_info_ref;
        inline app::CC_Base__Class* get_class() {
            return il2cpp::get_class<app::CC_Base__Class>(type_info, "", "CC_Base");
        }
        inline app::CC_Base* create() {
            return il2cpp::create_object<app::CC_Base>(get_class());
        }
    } // namespace CC_Base
} // namespace app::classes::types
