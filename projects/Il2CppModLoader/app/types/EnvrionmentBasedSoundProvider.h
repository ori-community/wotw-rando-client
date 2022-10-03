#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnvrionmentBasedSoundProvider {
        namespace {
            app::EnvrionmentBasedSoundProvider__Class* type_info_ref = nullptr;
        }
        app::EnvrionmentBasedSoundProvider__Class** type_info = &type_info_ref;
        inline app::EnvrionmentBasedSoundProvider__Class* get_class() {
            return il2cpp::get_class<app::EnvrionmentBasedSoundProvider__Class>(type_info, "", "EnvrionmentBasedSoundProvider");
        }
        inline app::EnvrionmentBasedSoundProvider* create() {
            return il2cpp::create_object<app::EnvrionmentBasedSoundProvider>(get_class());
        }
    } // namespace EnvrionmentBasedSoundProvider
} // namespace app::classes::types
