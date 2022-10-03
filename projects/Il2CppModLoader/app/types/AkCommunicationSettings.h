#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkCommunicationSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkCommunicationSettings__Class** type_info;
        inline app::AkCommunicationSettings__Class* get_class() {
            return il2cpp::get_class<app::AkCommunicationSettings__Class>(type_info, "", "AkCommunicationSettings");
        }
        inline app::AkCommunicationSettings* create() {
            return il2cpp::create_object<app::AkCommunicationSettings>(get_class());
        }
    } // namespace AkCommunicationSettings
} // namespace app::classes::types
