#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AddAppDependencyResult_t {
        namespace {
            inline app::AddAppDependencyResult_t__Class* type_info_ref = nullptr;
        }
        inline app::AddAppDependencyResult_t__Class** type_info = &type_info_ref;
        inline app::AddAppDependencyResult_t__Class* get_class() {
            return il2cpp::get_class<app::AddAppDependencyResult_t__Class>(type_info, "Steamworks", "AddAppDependencyResult_t");
        }
        inline app::AddAppDependencyResult_t* create() {
            return il2cpp::create_object<app::AddAppDependencyResult_t>(get_class());
        }
        inline app::AddAppDependencyResult_t__Boxed* box(app::AddAppDependencyResult_t value) {
            return il2cpp::box_value<app::AddAppDependencyResult_t__Boxed>(get_class(), value);
        }
    } // namespace AddAppDependencyResult_t
} // namespace app::classes::types
