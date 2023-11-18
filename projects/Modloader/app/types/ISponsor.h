#pragma once
#include <Modloader/app/structs/ISponsor.h>
#include <Modloader/app/structs/ISponsor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISponsor {
        inline app::ISponsor__Class** type_info() {
            static app::ISponsor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISponsor__Class**)(modloader::win::memory::resolve_rva(0x04747F80));
            }
            return cache;
        }
        inline app::ISponsor__Class* get_class() {
            return il2cpp::get_class<app::ISponsor__Class>(type_info(), "System.Runtime.Remoting.Lifetime", "ISponsor");
        }
    } // namespace ISponsor
} // namespace app::classes::types
