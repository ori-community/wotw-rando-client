#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DisableScale {
        namespace {
            app::DisableScale__Class* type_info_ref = nullptr;
        }
        app::DisableScale__Class** type_info = &type_info_ref;
        inline app::DisableScale__Class* get_class() {
            return il2cpp::get_class<app::DisableScale__Class>(type_info, "", "DisableScale");
        }
        inline app::DisableScale* create() {
            return il2cpp::create_object<app::DisableScale>(get_class());
        }
    } // namespace DisableScale
} // namespace app::classes::types
