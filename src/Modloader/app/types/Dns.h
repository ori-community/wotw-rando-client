#pragma once
#include <Modloader/app/structs/Dns.h>
#include <Modloader/app/structs/Dns__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dns {
        inline app::Dns__Class** type_info() {
            static app::Dns__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Dns__Class**)(modloader::win::memory::resolve_rva(0x047743C0));
            }
            return cache;
        }
        inline app::Dns__Class* get_class() {
            return il2cpp::get_class<app::Dns__Class>(type_info(), "System.Net", "Dns");
        }
        inline app::Dns* create() {
            return il2cpp::create_object<app::Dns>(get_class());
        }
    } // namespace Dns
} // namespace app::classes::types
