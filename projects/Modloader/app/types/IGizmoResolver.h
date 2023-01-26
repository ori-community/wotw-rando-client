#pragma once
#include <Modloader/app/structs/IGizmoResolver.h>
#include <Modloader/app/structs/IGizmoResolver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IGizmoResolver {
        inline app::IGizmoResolver__Class** type_info() {
            static app::IGizmoResolver__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IGizmoResolver__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IGizmoResolver__Class* get_class() {
            return il2cpp::get_class<app::IGizmoResolver__Class>(type_info(), "", "IGizmoResolver");
        }
    } // namespace IGizmoResolver
} // namespace app::classes::types
