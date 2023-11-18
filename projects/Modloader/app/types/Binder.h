#pragma once
#include <Modloader/app/structs/Binder.h>
#include <Modloader/app/structs/Binder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Binder {
        inline app::Binder__Class** type_info() {
            static app::Binder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Binder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Binder__Class* get_class() {
            return il2cpp::get_class<app::Binder__Class>(type_info(), "System.Reflection", "Binder");
        }
        inline app::Binder* create() {
            return il2cpp::create_object<app::Binder>(get_class());
        }
    } // namespace Binder
} // namespace app::classes::types
