#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaterFallMask_WaterLineInterruption {
        inline app::WaterFallMask_WaterLineInterruption__Class** type_info = (app::WaterFallMask_WaterLineInterruption__Class**)(modloader::win::memory::resolve_rva(0x04755CB0));
        inline app::WaterFallMask_WaterLineInterruption__Class* get_class() {
            return il2cpp::get_nested_class<app::WaterFallMask_WaterLineInterruption__Class>(type_info, "Moon", "WaterFallMask", "WaterLineInterruption");
        }
        inline app::WaterFallMask_WaterLineInterruption* create() {
            return il2cpp::create_object<app::WaterFallMask_WaterLineInterruption>(get_class());
        }
    } // namespace WaterFallMask_WaterLineInterruption
} // namespace app::classes::types
