#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkCommunicationSettings {
        inline app::AkCommunicationSettings__Class** type_info = (app::AkCommunicationSettings__Class**)(modloader::win::memory::resolve_rva(0x04787008));
        inline app::AkCommunicationSettings__Class* get_class() {
            return il2cpp::get_class<app::AkCommunicationSettings__Class>(type_info, "", "AkCommunicationSettings");
        }
        inline app::AkCommunicationSettings* create() {
            return il2cpp::create_object<app::AkCommunicationSettings>(get_class());
        }
    } // namespace AkCommunicationSettings
} // namespace app::classes::types
