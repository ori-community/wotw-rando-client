#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NaruSounds {
        namespace {
            app::NaruSounds__Class* type_info_ref = nullptr;
        }
        app::NaruSounds__Class** type_info = &type_info_ref;
        inline app::NaruSounds__Class* get_class() {
            return il2cpp::get_class<app::NaruSounds__Class>(type_info, "", "NaruSounds");
        }
        inline app::NaruSounds* create() {
            return il2cpp::create_object<app::NaruSounds>(get_class());
        }
    } // namespace NaruSounds
} // namespace app::classes::types
