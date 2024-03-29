#pragma once
#include <Modloader/app/structs/DesignerAttribute.h>
#include <Modloader/app/structs/DesignerAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DesignerAttribute {
        inline app::DesignerAttribute__Class** type_info() {
            static app::DesignerAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DesignerAttribute__Class**)(modloader::win::memory::resolve_rva(0x04782130));
            }
            return cache;
        }
        inline app::DesignerAttribute__Class* get_class() {
            return il2cpp::get_class<app::DesignerAttribute__Class>(type_info(), "System.ComponentModel", "DesignerAttribute");
        }
        inline app::DesignerAttribute* create() {
            return il2cpp::create_object<app::DesignerAttribute>(get_class());
        }
    } // namespace DesignerAttribute
} // namespace app::classes::types
