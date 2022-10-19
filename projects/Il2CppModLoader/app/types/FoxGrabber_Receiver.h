#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FoxGrabber_Receiver {
        inline app::FoxGrabber_Receiver__Class** type_info = (app::FoxGrabber_Receiver__Class**)(modloader::win::memory::resolve_rva(0x04706500));
        inline app::FoxGrabber_Receiver__Class* get_class() {
            return il2cpp::get_nested_class<app::FoxGrabber_Receiver__Class>(type_info, "", "FoxGrabber", "Receiver");
        }
    } // namespace FoxGrabber_Receiver
} // namespace app::classes::types
