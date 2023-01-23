#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IMessageBox__Class.h>

namespace app::classes::types {
    namespace IMessageBox {
        inline app::IMessageBox__Class** type_info = (app::IMessageBox__Class**)(modloader::win::memory::resolve_rva(0x0475D6B8));
        inline app::IMessageBox__Class* get_class() {
            return il2cpp::get_class<app::IMessageBox__Class>(type_info, "Moon.InteractionGraph", "IMessageBox");
        }
    } // namespace IMessageBox
} // namespace app::classes::types
