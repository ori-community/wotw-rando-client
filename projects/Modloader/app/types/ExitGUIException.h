#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExitGUIException {
        inline app::ExitGUIException__Class** type_info = (app::ExitGUIException__Class**)(modloader::win::memory::resolve_rva(0x04721908));
        inline app::ExitGUIException__Class* get_class() {
            return il2cpp::get_class<app::ExitGUIException__Class>(type_info, "UnityEngine", "ExitGUIException");
        }
        inline app::ExitGUIException* create() {
            return il2cpp::create_object<app::ExitGUIException>(get_class());
        }
    } // namespace ExitGUIException
} // namespace app::classes::types
