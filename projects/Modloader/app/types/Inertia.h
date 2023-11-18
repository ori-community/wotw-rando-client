#pragma once
#include <Modloader/app/structs/Inertia.h>
#include <Modloader/app/structs/Inertia__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Inertia {
        inline app::Inertia__Class** type_info() {
            static app::Inertia__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Inertia__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Inertia__Class* get_class() {
            return il2cpp::get_class<app::Inertia__Class>(type_info(), "RootMotion.FinalIK", "Inertia");
        }
        inline app::Inertia* create() {
            return il2cpp::create_object<app::Inertia>(get_class());
        }
    } // namespace Inertia
} // namespace app::classes::types
