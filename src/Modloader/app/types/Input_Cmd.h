#pragma once
#include <Modloader/app/structs/Input_Cmd.h>
#include <Modloader/app/structs/Input_Cmd__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Input_Cmd {
        inline app::Input_Cmd__Class** type_info() {
            static app::Input_Cmd__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Input_Cmd__Class**)(modloader::win::memory::resolve_rva(0x0475BD40));
            }
            return cache;
        }
        inline app::Input_Cmd__Class* get_class() {
            return il2cpp::get_nested_class<app::Input_Cmd__Class>(type_info(), "Core", "Input", "Cmd");
        }
        inline app::Input_Cmd* create() {
            return il2cpp::create_object<app::Input_Cmd>(get_class());
        }
    } // namespace Input_Cmd
} // namespace app::classes::types
