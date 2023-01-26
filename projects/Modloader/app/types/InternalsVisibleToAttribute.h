#pragma once
#include <Modloader/app/structs/InternalsVisibleToAttribute.h>
#include <Modloader/app/structs/InternalsVisibleToAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InternalsVisibleToAttribute {
        inline app::InternalsVisibleToAttribute__Class** type_info() {
            static app::InternalsVisibleToAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InternalsVisibleToAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InternalsVisibleToAttribute__Class* get_class() {
            return il2cpp::get_class<app::InternalsVisibleToAttribute__Class>(type_info(), "System.Runtime.CompilerServices", "InternalsVisibleToAttribute");
        }
        inline app::InternalsVisibleToAttribute* create() {
            return il2cpp::create_object<app::InternalsVisibleToAttribute>(get_class());
        }
    } // namespace InternalsVisibleToAttribute
} // namespace app::classes::types
