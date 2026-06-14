#pragma once
#include <Modloader/app/structs/IMessageBox.h>
#include <Modloader/app/structs/IMessageBox__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMessageBox {
        inline app::IMessageBox__Class** type_info() {
            static app::IMessageBox__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IMessageBox__Class**)(modloader::win::memory::resolve_rva(0x0475D6B8));
            }
            return cache;
        }
        inline app::IMessageBox__Class* get_class() {
            return il2cpp::get_class<app::IMessageBox__Class>(type_info(), "Moon.InteractionGraph", "IMessageBox");
        }
    } // namespace IMessageBox
} // namespace app::classes::types
