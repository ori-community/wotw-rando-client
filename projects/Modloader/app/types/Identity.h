#pragma once
#include <Modloader/app/structs/Identity.h>
#include <Modloader/app/structs/Identity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Identity {
        inline app::Identity__Class** type_info() {
            static app::Identity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Identity__Class**)(modloader::win::memory::resolve_rva(0x04727B00));
            }
            return cache;
        }
        inline app::Identity__Class* get_class() {
            return il2cpp::get_class<app::Identity__Class>(type_info(), "System.Runtime.Remoting", "Identity");
        }
        inline app::Identity* create() {
            return il2cpp::create_object<app::Identity>(get_class());
        }
    } // namespace Identity
} // namespace app::classes::types
