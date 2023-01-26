#pragma once
#include <Modloader/app/structs/WaterFallMask_WaterLineInterruption.h>
#include <Modloader/app/structs/WaterFallMask_WaterLineInterruption__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterFallMask_WaterLineInterruption {
        inline app::WaterFallMask_WaterLineInterruption__Class** type_info() {
            static app::WaterFallMask_WaterLineInterruption__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WaterFallMask_WaterLineInterruption__Class**)(modloader::win::memory::resolve_rva(0x04755CB0));
            }
            return cache;
        }
        inline app::WaterFallMask_WaterLineInterruption__Class* get_class() {
            return il2cpp::get_nested_class<app::WaterFallMask_WaterLineInterruption__Class>(type_info(), "Moon", "WaterFallMask", "WaterLineInterruption");
        }
        inline app::WaterFallMask_WaterLineInterruption* create() {
            return il2cpp::create_object<app::WaterFallMask_WaterLineInterruption>(get_class());
        }
    } // namespace WaterFallMask_WaterLineInterruption
} // namespace app::classes::types
