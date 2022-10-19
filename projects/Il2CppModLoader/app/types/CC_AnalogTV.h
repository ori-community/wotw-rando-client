#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CC_AnalogTV {
        namespace {
            inline app::CC_AnalogTV__Class* type_info_ref = nullptr;
        }
        inline app::CC_AnalogTV__Class** type_info = &type_info_ref;
        inline app::CC_AnalogTV__Class* get_class() {
            return il2cpp::get_class<app::CC_AnalogTV__Class>(type_info, "", "CC_AnalogTV");
        }
        inline app::CC_AnalogTV* create() {
            return il2cpp::create_object<app::CC_AnalogTV>(get_class());
        }
    } // namespace CC_AnalogTV
} // namespace app::classes::types
