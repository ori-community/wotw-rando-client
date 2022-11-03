#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnvironmentSoundPair__Array {
        namespace {
            inline app::EnvironmentSoundPair__Array__Class* type_info_ref = nullptr;
        }
        inline app::EnvironmentSoundPair__Array__Class** type_info = &type_info_ref;
        inline app::EnvironmentSoundPair__Array__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentSoundPair__Array__Class>(type_info, "", "EnvironmentSoundPair[]");
        }
        inline app::EnvironmentSoundPair__Array* create() {
            return il2cpp::create_object<app::EnvironmentSoundPair__Array>(get_class());
        }
    } // namespace EnvironmentSoundPair__Array
} // namespace app::classes::types
