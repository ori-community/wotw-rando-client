#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaterFallMask_WaterLineGroup__Array {
        namespace {
            inline app::WaterFallMask_WaterLineGroup__Array__Class* type_info_ref = nullptr;
        }
        inline app::WaterFallMask_WaterLineGroup__Array__Class** type_info = &type_info_ref;
        inline app::WaterFallMask_WaterLineGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::WaterFallMask_WaterLineGroup__Array__Class>(type_info, "Moon", "WaterFallMask+WaterLineGroup[]");
        }
        inline app::WaterFallMask_WaterLineGroup__Array* create() {
            return il2cpp::create_object<app::WaterFallMask_WaterLineGroup__Array>(get_class());
        }
    } // namespace WaterFallMask_WaterLineGroup__Array
} // namespace app::classes::types
