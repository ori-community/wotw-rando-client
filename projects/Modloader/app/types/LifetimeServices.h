#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LifetimeServices {
        inline app::LifetimeServices__Class** type_info = (app::LifetimeServices__Class**)(modloader::win::memory::resolve_rva(0x0478FB98));
        inline app::LifetimeServices__Class* get_class() {
            return il2cpp::get_class<app::LifetimeServices__Class>(type_info, "System.Runtime.Remoting.Lifetime", "LifetimeServices");
        }
        inline app::LifetimeServices* create() {
            return il2cpp::create_object<app::LifetimeServices>(get_class());
        }
    } // namespace LifetimeServices
} // namespace app::classes::types
