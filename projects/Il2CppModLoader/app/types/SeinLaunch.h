#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinLaunch {
        namespace {
            app::SeinLaunch__Class* type_info_ref = nullptr;
        }
        app::SeinLaunch__Class** type_info = &type_info_ref;
        inline app::SeinLaunch__Class* get_class() {
            return il2cpp::get_class<app::SeinLaunch__Class>(type_info, "", "SeinLaunch");
        }
        inline app::SeinLaunch* create() {
            return il2cpp::create_object<app::SeinLaunch>(get_class());
        }
    } // namespace SeinLaunch
} // namespace app::classes::types
