#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AxisButtonInput {
        inline app::AxisButtonInput__Class** type_info = (app::AxisButtonInput__Class**)(modloader::win::memory::resolve_rva(0x0477C1A8));
        inline app::AxisButtonInput__Class* get_class() {
            return il2cpp::get_class<app::AxisButtonInput__Class>(type_info, "SmartInput", "AxisButtonInput");
        }
        inline app::AxisButtonInput* create() {
            return il2cpp::create_object<app::AxisButtonInput>(get_class());
        }
    } // namespace AxisButtonInput
} // namespace app::classes::types
