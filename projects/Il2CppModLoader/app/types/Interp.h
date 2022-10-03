#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Interp {
        namespace {
            app::Interp__Class* type_info_ref = nullptr;
        }
        app::Interp__Class** type_info = &type_info_ref;
        inline app::Interp__Class* get_class() {
            return il2cpp::get_class<app::Interp__Class>(type_info, "RootMotion", "Interp");
        }
        inline app::Interp* create() {
            return il2cpp::create_object<app::Interp>(get_class());
        }
    } // namespace Interp
} // namespace app::classes::types
