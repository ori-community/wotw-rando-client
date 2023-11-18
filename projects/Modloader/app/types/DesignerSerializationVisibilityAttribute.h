#pragma once
#include <Modloader/app/structs/DesignerSerializationVisibilityAttribute.h>
#include <Modloader/app/structs/DesignerSerializationVisibilityAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DesignerSerializationVisibilityAttribute {
        inline app::DesignerSerializationVisibilityAttribute__Class** type_info() {
            static app::DesignerSerializationVisibilityAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DesignerSerializationVisibilityAttribute__Class**)(modloader::win::memory::resolve_rva(0x047512A8));
            }
            return cache;
        }
        inline app::DesignerSerializationVisibilityAttribute__Class* get_class() {
            return il2cpp::get_class<app::DesignerSerializationVisibilityAttribute__Class>(type_info(), "System.ComponentModel", "DesignerSerializationVisibilityAttribute");
        }
        inline app::DesignerSerializationVisibilityAttribute* create() {
            return il2cpp::create_object<app::DesignerSerializationVisibilityAttribute>(get_class());
        }
    } // namespace DesignerSerializationVisibilityAttribute
} // namespace app::classes::types
