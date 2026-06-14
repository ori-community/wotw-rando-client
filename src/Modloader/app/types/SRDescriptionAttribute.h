#pragma once
#include <Modloader/app/structs/SRDescriptionAttribute.h>
#include <Modloader/app/structs/SRDescriptionAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SRDescriptionAttribute {
        inline app::SRDescriptionAttribute__Class** type_info() {
            static app::SRDescriptionAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SRDescriptionAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SRDescriptionAttribute__Class* get_class() {
            return il2cpp::get_class<app::SRDescriptionAttribute__Class>(type_info(), "System", "SRDescriptionAttribute");
        }
        inline app::SRDescriptionAttribute* create() {
            return il2cpp::create_object<app::SRDescriptionAttribute>(get_class());
        }
    } // namespace SRDescriptionAttribute
} // namespace app::classes::types
