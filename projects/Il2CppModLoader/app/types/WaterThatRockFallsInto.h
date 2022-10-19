#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaterThatRockFallsInto {
        namespace {
            inline app::WaterThatRockFallsInto__Class* type_info_ref = nullptr;
        }
        inline app::WaterThatRockFallsInto__Class** type_info = &type_info_ref;
        inline app::WaterThatRockFallsInto__Class* get_class() {
            return il2cpp::get_class<app::WaterThatRockFallsInto__Class>(type_info, "", "WaterThatRockFallsInto");
        }
        inline app::WaterThatRockFallsInto* create() {
            return il2cpp::create_object<app::WaterThatRockFallsInto>(get_class());
        }
    } // namespace WaterThatRockFallsInto
} // namespace app::classes::types
