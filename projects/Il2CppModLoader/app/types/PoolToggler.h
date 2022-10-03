#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PoolToggler {
        namespace {
            app::PoolToggler__Class* type_info_ref = nullptr;
        }
        app::PoolToggler__Class** type_info = &type_info_ref;
        inline app::PoolToggler__Class* get_class() {
            return il2cpp::get_class<app::PoolToggler__Class>(type_info, "", "PoolToggler");
        }
        inline app::PoolToggler* create() {
            return il2cpp::create_object<app::PoolToggler>(get_class());
        }
    } // namespace PoolToggler
} // namespace app::classes::types
