#pragma once
#include <Modloader/app/structs/ControlItemCommand.h>
#include <Modloader/app/structs/ControlItemCommand__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControlItemCommand {
        inline app::ControlItemCommand__Class** type_info() {
            static app::ControlItemCommand__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ControlItemCommand__Class**)(modloader::win::memory::resolve_rva(0x04701A58));
            }
            return cache;
        }
        inline app::ControlItemCommand__Class* get_class() {
            return il2cpp::get_class<app::ControlItemCommand__Class>(type_info(), "", "ControlItemCommand");
        }
        inline app::ControlItemCommand* create() {
            return il2cpp::create_object<app::ControlItemCommand>(get_class());
        }
    } // namespace ControlItemCommand
} // namespace app::classes::types
