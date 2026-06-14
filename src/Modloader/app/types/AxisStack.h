#pragma once
#include <Modloader/app/structs/AxisStack.h>
#include <Modloader/app/structs/AxisStack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AxisStack {
        inline app::AxisStack__Class** type_info() {
            static app::AxisStack__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AxisStack__Class**)(modloader::win::memory::resolve_rva(0x04707148));
            }
            return cache;
        }
        inline app::AxisStack__Class* get_class() {
            return il2cpp::get_class<app::AxisStack__Class>(type_info(), "System.Xml.Schema", "AxisStack");
        }
        inline app::AxisStack* create() {
            return il2cpp::create_object<app::AxisStack>(get_class());
        }
    } // namespace AxisStack
} // namespace app::classes::types
