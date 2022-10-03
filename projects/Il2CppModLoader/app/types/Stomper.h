#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Stomper {
        namespace {
            app::Stomper__Class* type_info_ref = nullptr;
        }
        app::Stomper__Class** type_info = &type_info_ref;
        inline app::Stomper__Class* get_class() {
            return il2cpp::get_class<app::Stomper__Class>(type_info, "", "Stomper");
        }
        inline app::Stomper* create() {
            return il2cpp::create_object<app::Stomper>(get_class());
        }
    } // namespace Stomper
} // namespace app::classes::types
