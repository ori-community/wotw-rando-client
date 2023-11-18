#pragma once
#include <Modloader/app/structs/ComponentConverter.h>
#include <Modloader/app/structs/ComponentConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ComponentConverter {
        inline app::ComponentConverter__Class** type_info() {
            static app::ComponentConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ComponentConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ComponentConverter__Class* get_class() {
            return il2cpp::get_class<app::ComponentConverter__Class>(type_info(), "System.ComponentModel", "ComponentConverter");
        }
        inline app::ComponentConverter* create() {
            return il2cpp::create_object<app::ComponentConverter>(get_class());
        }
    } // namespace ComponentConverter
} // namespace app::classes::types
