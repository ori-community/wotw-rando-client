#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteropHelp {
        namespace {
            app::InteropHelp__Class* type_info_ref = nullptr;
        }
        app::InteropHelp__Class** type_info = &type_info_ref;
        inline app::InteropHelp__Class* get_class() {
            return il2cpp::get_class<app::InteropHelp__Class>(type_info, "Steamworks", "InteropHelp");
        }
        inline app::InteropHelp* create() {
            return il2cpp::create_object<app::InteropHelp>(get_class());
        }
    } // namespace InteropHelp
} // namespace app::classes::types
