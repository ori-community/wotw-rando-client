#pragma once
#include <Modloader/app/structs/NetworkInformationException.h>
#include <Modloader/app/structs/NetworkInformationException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NetworkInformationException {
        inline app::NetworkInformationException__Class** type_info() {
            static app::NetworkInformationException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NetworkInformationException__Class**)(modloader::win::memory::resolve_rva(0x04759CD8));
            }
            return cache;
        }
        inline app::NetworkInformationException__Class* get_class() {
            return il2cpp::get_class<app::NetworkInformationException__Class>(type_info(), "System.Net.NetworkInformation", "NetworkInformationException");
        }
        inline app::NetworkInformationException* create() {
            return il2cpp::create_object<app::NetworkInformationException>(get_class());
        }
    } // namespace NetworkInformationException
} // namespace app::classes::types
