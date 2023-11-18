#pragma once
#include <Modloader/app/structs/CFNetwork.h>
#include <Modloader/app/structs/CFNetwork__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CFNetwork {
        inline app::CFNetwork__Class** type_info() {
            static app::CFNetwork__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CFNetwork__Class**)(modloader::win::memory::resolve_rva(0x047454D8));
            }
            return cache;
        }
        inline app::CFNetwork__Class* get_class() {
            return il2cpp::get_class<app::CFNetwork__Class>(type_info(), "Mono.Net", "CFNetwork");
        }
        inline app::CFNetwork* create() {
            return il2cpp::create_object<app::CFNetwork>(get_class());
        }
    } // namespace CFNetwork
} // namespace app::classes::types
