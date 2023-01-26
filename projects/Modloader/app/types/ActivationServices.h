#pragma once
#include <Modloader/app/structs/ActivationServices.h>
#include <Modloader/app/structs/ActivationServices__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActivationServices {
        inline app::ActivationServices__Class** type_info() {
            static app::ActivationServices__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ActivationServices__Class**)(modloader::win::memory::resolve_rva(0x04772740));
            }
            return cache;
        }
        inline app::ActivationServices__Class* get_class() {
            return il2cpp::get_class<app::ActivationServices__Class>(type_info(), "System.Runtime.Remoting.Activation", "ActivationServices");
        }
        inline app::ActivationServices* create() {
            return il2cpp::create_object<app::ActivationServices>(get_class());
        }
    } // namespace ActivationServices
} // namespace app::classes::types
