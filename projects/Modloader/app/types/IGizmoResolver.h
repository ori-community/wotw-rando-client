#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IGizmoResolver__Class.h>

namespace app::classes::types {
    namespace IGizmoResolver {
        namespace {
            inline app::IGizmoResolver__Class* type_info_ref = nullptr;
        }
        inline app::IGizmoResolver__Class** type_info = &type_info_ref;
        inline app::IGizmoResolver__Class* get_class() {
            return il2cpp::get_class<app::IGizmoResolver__Class>(type_info, "", "IGizmoResolver");
        }
    } // namespace IGizmoResolver
} // namespace app::classes::types
