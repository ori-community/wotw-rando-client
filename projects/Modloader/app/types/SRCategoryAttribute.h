#pragma once
#include <Modloader/app/structs/SRCategoryAttribute.h>
#include <Modloader/app/structs/SRCategoryAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SRCategoryAttribute {
        inline app::SRCategoryAttribute__Class** type_info() {
            static app::SRCategoryAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SRCategoryAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SRCategoryAttribute__Class* get_class() {
            return il2cpp::get_class<app::SRCategoryAttribute__Class>(type_info(), "System.ComponentModel", "SRCategoryAttribute");
        }
        inline app::SRCategoryAttribute* create() {
            return il2cpp::create_object<app::SRCategoryAttribute>(get_class());
        }
    } // namespace SRCategoryAttribute
} // namespace app::classes::types
