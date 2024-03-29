#pragma once
#include <Modloader/app/structs/LifetimeServices.h>
#include <Modloader/app/structs/LifetimeServices__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LifetimeServices {
        inline app::LifetimeServices__Class** type_info() {
            static app::LifetimeServices__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LifetimeServices__Class**)(modloader::win::memory::resolve_rva(0x0478FB98));
            }
            return cache;
        }
        inline app::LifetimeServices__Class* get_class() {
            return il2cpp::get_class<app::LifetimeServices__Class>(type_info(), "System.Runtime.Remoting.Lifetime", "LifetimeServices");
        }
        inline app::LifetimeServices* create() {
            return il2cpp::create_object<app::LifetimeServices>(get_class());
        }
    } // namespace LifetimeServices
} // namespace app::classes::types
