#pragma once
#include <Modloader/app/structs/SHA384Managed.h>
#include <Modloader/app/structs/SHA384Managed__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SHA384Managed {
        inline app::SHA384Managed__Class** type_info() {
            static app::SHA384Managed__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SHA384Managed__Class**)(modloader::win::memory::resolve_rva(0x04785378));
            }
            return cache;
        }
        inline app::SHA384Managed__Class* get_class() {
            return il2cpp::get_class<app::SHA384Managed__Class>(type_info(), "System.Security.Cryptography", "SHA384Managed");
        }
        inline app::SHA384Managed* create() {
            return il2cpp::create_object<app::SHA384Managed>(get_class());
        }
    } // namespace SHA384Managed
} // namespace app::classes::types
