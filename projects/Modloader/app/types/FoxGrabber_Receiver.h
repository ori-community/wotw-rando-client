#pragma once
#include <Modloader/app/structs/FoxGrabber_Receiver.h>
#include <Modloader/app/structs/FoxGrabber_Receiver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FoxGrabber_Receiver {
        inline app::FoxGrabber_Receiver__Class** type_info() {
            static app::FoxGrabber_Receiver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FoxGrabber_Receiver__Class**)(modloader::win::memory::resolve_rva(0x04706500));
            }
            return cache;
        }
        inline app::FoxGrabber_Receiver__Class* get_class() {
            return il2cpp::get_nested_class<app::FoxGrabber_Receiver__Class>(type_info(), "", "FoxGrabber", "Receiver");
        }
    } // namespace FoxGrabber_Receiver
} // namespace app::classes::types
