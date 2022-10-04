#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FoxGrabber_Receiver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FoxGrabber_Receiver__Class** type_info;
        inline app::FoxGrabber_Receiver__Class* get_class() {
            return il2cpp::get_nested_class<app::FoxGrabber_Receiver__Class>(type_info, "", "FoxGrabber", "Receiver");
        }
    } // namespace FoxGrabber_Receiver
} // namespace app::classes::types
