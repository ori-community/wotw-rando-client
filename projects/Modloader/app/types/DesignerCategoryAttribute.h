#pragma once
#include <Modloader/app/structs/DesignerCategoryAttribute.h>
#include <Modloader/app/structs/DesignerCategoryAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DesignerCategoryAttribute {
        inline app::DesignerCategoryAttribute__Class** type_info() {
            static app::DesignerCategoryAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DesignerCategoryAttribute__Class**)(modloader::win::memory::resolve_rva(0x04779F68));
            }
            return cache;
        }
        inline app::DesignerCategoryAttribute__Class* get_class() {
            return il2cpp::get_class<app::DesignerCategoryAttribute__Class>(type_info(), "System.ComponentModel", "DesignerCategoryAttribute");
        }
        inline app::DesignerCategoryAttribute* create() {
            return il2cpp::create_object<app::DesignerCategoryAttribute>(get_class());
        }
    } // namespace DesignerCategoryAttribute
} // namespace app::classes::types
