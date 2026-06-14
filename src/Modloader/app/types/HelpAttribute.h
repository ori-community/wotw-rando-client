#pragma once
#include <Modloader/app/structs/HelpAttribute.h>
#include <Modloader/app/structs/HelpAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HelpAttribute {
        inline app::HelpAttribute__Class** type_info() {
            static app::HelpAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HelpAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HelpAttribute__Class* get_class() {
            return il2cpp::get_class<app::HelpAttribute__Class>(type_info(), "Moon.Attributes", "HelpAttribute");
        }
        inline app::HelpAttribute* create() {
            return il2cpp::create_object<app::HelpAttribute>(get_class());
        }
    } // namespace HelpAttribute
} // namespace app::classes::types
