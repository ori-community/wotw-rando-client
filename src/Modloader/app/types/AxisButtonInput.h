#pragma once
#include <Modloader/app/structs/AxisButtonInput.h>
#include <Modloader/app/structs/AxisButtonInput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AxisButtonInput {
        inline app::AxisButtonInput__Class** type_info() {
            static app::AxisButtonInput__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AxisButtonInput__Class**)(modloader::win::memory::resolve_rva(0x0477C1A8));
            }
            return cache;
        }
        inline app::AxisButtonInput__Class* get_class() {
            return il2cpp::get_class<app::AxisButtonInput__Class>(type_info(), "SmartInput", "AxisButtonInput");
        }
        inline app::AxisButtonInput* create() {
            return il2cpp::create_object<app::AxisButtonInput>(get_class());
        }
    } // namespace AxisButtonInput
} // namespace app::classes::types
