#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Creep {
        namespace {
            app::Creep__Class* type_info_ref = nullptr;
        }
        app::Creep__Class** type_info = &type_info_ref;
        inline app::Creep__Class* get_class() {
            return il2cpp::get_class<app::Creep__Class>(type_info, "", "Creep");
        }
        inline app::Creep* create() {
            return il2cpp::create_object<app::Creep>(get_class());
        }
    } // namespace Creep
} // namespace app::classes::types
