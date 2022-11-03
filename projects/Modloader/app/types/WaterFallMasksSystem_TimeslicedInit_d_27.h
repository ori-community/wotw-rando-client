#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaterFallMasksSystem_TimeslicedInit_d_27 {
        inline app::WaterFallMasksSystem_TimeslicedInit_d_27__Class** type_info = (app::WaterFallMasksSystem_TimeslicedInit_d_27__Class**)(modloader::win::memory::resolve_rva(0x04738390));
        inline app::WaterFallMasksSystem_TimeslicedInit_d_27__Class* get_class() {
            return il2cpp::get_nested_class<app::WaterFallMasksSystem_TimeslicedInit_d_27__Class>(type_info, "Moon", "WaterFallMasksSystem", "<TimeslicedInit>d__27");
        }
        inline app::WaterFallMasksSystem_TimeslicedInit_d_27* create() {
            return il2cpp::create_object<app::WaterFallMasksSystem_TimeslicedInit_d_27>(get_class());
        }
    } // namespace WaterFallMasksSystem_TimeslicedInit_d_27
} // namespace app::classes::types
