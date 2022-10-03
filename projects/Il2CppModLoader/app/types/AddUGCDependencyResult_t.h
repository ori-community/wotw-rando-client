#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddUGCDependencyResult_t {
        namespace {
            app::AddUGCDependencyResult_t__Class* type_info_ref = nullptr;
        }
        app::AddUGCDependencyResult_t__Class** type_info = &type_info_ref;
        inline app::AddUGCDependencyResult_t__Class* get_class() {
            return il2cpp::get_class<app::AddUGCDependencyResult_t__Class>(type_info, "Steamworks", "AddUGCDependencyResult_t");
        }
        inline app::AddUGCDependencyResult_t* create() {
            return il2cpp::create_object<app::AddUGCDependencyResult_t>(get_class());
        }
        inline app::AddUGCDependencyResult_t__Boxed* box(app::AddUGCDependencyResult_t value) {
            return il2cpp::box_value<app::AddUGCDependencyResult_t__Boxed>(get_class(), value);
        }
    } // namespace AddUGCDependencyResult_t
} // namespace app::classes::types
