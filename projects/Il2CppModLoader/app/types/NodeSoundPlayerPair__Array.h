#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NodeSoundPlayerPair__Array {
        namespace {
            inline app::NodeSoundPlayerPair__Array__Class* type_info_ref = nullptr;
        }
        inline app::NodeSoundPlayerPair__Array__Class** type_info = &type_info_ref;
        inline app::NodeSoundPlayerPair__Array__Class* get_class() {
            return il2cpp::get_class<app::NodeSoundPlayerPair__Array__Class>(type_info, "", "NodeSoundPlayerPair[]");
        }
        inline app::NodeSoundPlayerPair__Array* create() {
            return il2cpp::create_object<app::NodeSoundPlayerPair__Array>(get_class());
        }
    } // namespace NodeSoundPlayerPair__Array
} // namespace app::classes::types
