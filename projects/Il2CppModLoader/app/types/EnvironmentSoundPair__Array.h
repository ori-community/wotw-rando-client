#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnvironmentSoundPair__Array {
        namespace {
            app::EnvironmentSoundPair__Array__Class* type_info_ref = nullptr;
        }
        app::EnvironmentSoundPair__Array__Class** type_info = &type_info_ref;
        inline app::EnvironmentSoundPair__Array__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentSoundPair__Array__Class>(type_info, "", "EnvironmentSoundPair[]");
        }
        inline app::EnvironmentSoundPair__Array* create() {
            return il2cpp::create_object<app::EnvironmentSoundPair__Array>(get_class());
        }
    } // namespace EnvironmentSoundPair__Array
} // namespace app::classes::types
