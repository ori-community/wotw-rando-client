#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ActivationServices {
        inline app::ActivationServices__Class** type_info = (app::ActivationServices__Class**)(modloader::win::memory::resolve_rva(0x04772740));
        inline app::ActivationServices__Class* get_class() {
            return il2cpp::get_class<app::ActivationServices__Class>(type_info, "System.Runtime.Remoting.Activation", "ActivationServices");
        }
        inline app::ActivationServices* create() {
            return il2cpp::create_object<app::ActivationServices>(get_class());
        }
    } // namespace ActivationServices
} // namespace app::classes::types
