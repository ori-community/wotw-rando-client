#pragma once
#include <Modloader/app/structs/Activator.h>
#include <Modloader/app/structs/Activator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Activator {
        inline app::Activator__Class** type_info() {
            static app::Activator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Activator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Activator__Class* get_class() {
            return il2cpp::get_class<app::Activator__Class>(type_info(), "System", "Activator");
        }
        inline app::Activator* create() {
            return il2cpp::create_object<app::Activator>(get_class());
        }
    } // namespace Activator
} // namespace app::classes::types
