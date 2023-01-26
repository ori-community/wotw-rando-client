#pragma once
#include <Modloader/app/structs/SetCustomBounds.h>
#include <Modloader/app/structs/SetCustomBounds__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetCustomBounds {
        inline app::SetCustomBounds__Class** type_info() {
            static app::SetCustomBounds__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetCustomBounds__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetCustomBounds__Class* get_class() {
            return il2cpp::get_class<app::SetCustomBounds__Class>(type_info(), "", "SetCustomBounds");
        }
        inline app::SetCustomBounds* create() {
            return il2cpp::create_object<app::SetCustomBounds>(get_class());
        }
    } // namespace SetCustomBounds
} // namespace app::classes::types
