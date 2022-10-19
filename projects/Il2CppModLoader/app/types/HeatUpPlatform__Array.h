#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HeatUpPlatform__Array {
        namespace {
            inline app::HeatUpPlatform__Array__Class* type_info_ref = nullptr;
        }
        inline app::HeatUpPlatform__Array__Class** type_info = &type_info_ref;
        inline app::HeatUpPlatform__Array__Class* get_class() {
            return il2cpp::get_class<app::HeatUpPlatform__Array__Class>(type_info, "", "HeatUpPlatform[]");
        }
        inline app::HeatUpPlatform__Array* create() {
            return il2cpp::create_object<app::HeatUpPlatform__Array>(get_class());
        }
    } // namespace HeatUpPlatform__Array
} // namespace app::classes::types
