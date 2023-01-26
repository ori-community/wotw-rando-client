#pragma once
#include <Modloader/app/structs/Suspendable.h>
#include <Modloader/app/structs/Suspendable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Suspendable {
        inline app::Suspendable__Class** type_info() {
            static app::Suspendable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Suspendable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Suspendable__Class* get_class() {
            return il2cpp::get_class<app::Suspendable__Class>(type_info(), "Moon", "Suspendable");
        }
        inline app::Suspendable* create() {
            return il2cpp::create_object<app::Suspendable>(get_class());
        }
    } // namespace Suspendable
} // namespace app::classes::types
