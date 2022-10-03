#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoveUGCDependencyResult_t {
        namespace {
            app::RemoveUGCDependencyResult_t__Class* type_info_ref = nullptr;
        }
        app::RemoveUGCDependencyResult_t__Class** type_info = &type_info_ref;
        inline app::RemoveUGCDependencyResult_t__Class* get_class() {
            return il2cpp::get_class<app::RemoveUGCDependencyResult_t__Class>(type_info, "Steamworks", "RemoveUGCDependencyResult_t");
        }
        inline app::RemoveUGCDependencyResult_t* create() {
            return il2cpp::create_object<app::RemoveUGCDependencyResult_t>(get_class());
        }
        inline app::RemoveUGCDependencyResult_t__Boxed* box(app::RemoveUGCDependencyResult_t value) {
            return il2cpp::box_value<app::RemoveUGCDependencyResult_t__Boxed>(get_class(), value);
        }
    } // namespace RemoveUGCDependencyResult_t
} // namespace app::classes::types
