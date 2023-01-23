#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Input_Cmd__Class.h>
#include <Modloader/app/structs/Input_Cmd.h>

namespace app::classes::types {
    namespace Input_Cmd {
        inline app::Input_Cmd__Class** type_info = (app::Input_Cmd__Class**)(modloader::win::memory::resolve_rva(0x0475BD40));
        inline app::Input_Cmd__Class* get_class() {
            return il2cpp::get_nested_class<app::Input_Cmd__Class>(type_info, "Core", "Input", "Cmd");
        }
        inline app::Input_Cmd* create() {
            return il2cpp::create_object<app::Input_Cmd>(get_class());
        }
    } // namespace Input_Cmd
} // namespace app::classes::types
