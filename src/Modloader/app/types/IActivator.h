#pragma once
#include <Modloader/app/structs/IActivator.h>
#include <Modloader/app/structs/IActivator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IActivator {
        inline app::IActivator__Class** type_info() {
            static app::IActivator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IActivator__Class**)(modloader::win::memory::resolve_rva(0x0470E670));
            }
            return cache;
        }
        inline app::IActivator__Class* get_class() {
            return il2cpp::get_class<app::IActivator__Class>(type_info(), "System.Runtime.Remoting.Activation", "IActivator");
        }
    } // namespace IActivator
} // namespace app::classes::types
