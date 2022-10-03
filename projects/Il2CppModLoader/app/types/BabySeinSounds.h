#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BabySeinSounds {
        namespace {
            app::BabySeinSounds__Class* type_info_ref = nullptr;
        }
        app::BabySeinSounds__Class** type_info = &type_info_ref;
        inline app::BabySeinSounds__Class* get_class() {
            return il2cpp::get_class<app::BabySeinSounds__Class>(type_info, "", "BabySeinSounds");
        }
        inline app::BabySeinSounds* create() {
            return il2cpp::create_object<app::BabySeinSounds>(get_class());
        }
    } // namespace BabySeinSounds
} // namespace app::classes::types
