#pragma once
#include <Modloader/app/structs/Lease.h>
#include <Modloader/app/structs/Lease__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Lease {
        inline app::Lease__Class** type_info() {
            static app::Lease__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Lease__Class**)(modloader::win::memory::resolve_rva(0x047157D0));
            }
            return cache;
        }
        inline app::Lease__Class* get_class() {
            return il2cpp::get_class<app::Lease__Class>(type_info(), "System.Runtime.Remoting.Lifetime", "Lease");
        }
        inline app::Lease* create() {
            return il2cpp::create_object<app::Lease>(get_class());
        }
    } // namespace Lease
} // namespace app::classes::types
