#pragma once
#include <Modloader/app/structs/EnvironmentSoundPair__Array.h>
#include <Modloader/app/structs/EnvironmentSoundPair__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnvironmentSoundPair__Array {
        inline app::EnvironmentSoundPair__Array__Class** type_info() {
            static app::EnvironmentSoundPair__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnvironmentSoundPair__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnvironmentSoundPair__Array__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentSoundPair__Array__Class>(type_info(), "", "EnvironmentSoundPair[]");
        }
        inline app::EnvironmentSoundPair__Array* create() {
            return il2cpp::create_object<app::EnvironmentSoundPair__Array>(get_class());
        }
    } // namespace EnvironmentSoundPair__Array
} // namespace app::classes::types
