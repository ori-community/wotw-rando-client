#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Behaviour {
        inline app::Behaviour__Class** type_info = (app::Behaviour__Class**)(modloader::win::memory::resolve_rva(0x0470C6F0));
        inline app::Behaviour__Class* get_class() {
            return il2cpp::get_class<app::Behaviour__Class>(type_info, "UnityEngine", "Behaviour");
        }
        inline app::Behaviour* create() {
            return il2cpp::create_object<app::Behaviour>(get_class());
        }
    } // namespace Behaviour
} // namespace app::classes::types
