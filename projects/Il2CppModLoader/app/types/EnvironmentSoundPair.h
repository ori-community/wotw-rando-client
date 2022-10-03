#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnvironmentSoundPair {
        namespace {
            app::EnvironmentSoundPair__Class* type_info_ref = nullptr;
        }
        app::EnvironmentSoundPair__Class** type_info = &type_info_ref;
        inline app::EnvironmentSoundPair__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentSoundPair__Class>(type_info, "", "EnvironmentSoundPair");
        }
        inline app::EnvironmentSoundPair* create() {
            return il2cpp::create_object<app::EnvironmentSoundPair>(get_class());
        }
        inline app::EnvironmentSoundPair__Array* create_array(int size) {
            return il2cpp::array_new<app::EnvironmentSoundPair__Array>(get_class(), size);
        }
    } // namespace EnvironmentSoundPair
} // namespace app::classes::types
