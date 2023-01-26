#pragma once
#include <Modloader/app/structs/HelpURLAttribute.h>
#include <Modloader/app/structs/HelpURLAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HelpURLAttribute {
        inline app::HelpURLAttribute__Class** type_info() {
            static app::HelpURLAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HelpURLAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HelpURLAttribute__Class* get_class() {
            return il2cpp::get_class<app::HelpURLAttribute__Class>(type_info(), "UnityEngine", "HelpURLAttribute");
        }
        inline app::HelpURLAttribute* create() {
            return il2cpp::create_object<app::HelpURLAttribute>(get_class());
        }
    } // namespace HelpURLAttribute
} // namespace app::classes::types
