#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaterPoisonCloud_Blob__Array {
        namespace {
            inline app::WaterPoisonCloud_Blob__Array__Class* type_info_ref = nullptr;
        }
        inline app::WaterPoisonCloud_Blob__Array__Class** type_info = &type_info_ref;
        inline app::WaterPoisonCloud_Blob__Array__Class* get_class() {
            return il2cpp::get_class<app::WaterPoisonCloud_Blob__Array__Class>(type_info, "", "WaterPoisonCloud+Blob[]");
        }
        inline app::WaterPoisonCloud_Blob__Array* create() {
            return il2cpp::create_object<app::WaterPoisonCloud_Blob__Array>(get_class());
        }
    } // namespace WaterPoisonCloud_Blob__Array
} // namespace app::classes::types
