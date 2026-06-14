#pragma once
#include <Modloader/app/structs/NameAttribute.h>
#include <Modloader/app/structs/NameAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NameAttribute {
        inline app::NameAttribute__Class** type_info() {
            static app::NameAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NameAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NameAttribute__Class* get_class() {
            return il2cpp::get_class<app::NameAttribute__Class>(type_info(), "Moon.EffectsFramework", "NameAttribute");
        }
        inline app::NameAttribute* create() {
            return il2cpp::create_object<app::NameAttribute>(get_class());
        }
    } // namespace NameAttribute
} // namespace app::classes::types
