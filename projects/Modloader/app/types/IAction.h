#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IAction__Class.h>

namespace app::classes::types {
    namespace IAction {
        inline app::IAction__Class** type_info = (app::IAction__Class**)(modloader::win::memory::resolve_rva(0x04712F58));
        inline app::IAction__Class* get_class() {
            return il2cpp::get_class<app::IAction__Class>(type_info, "", "IAction");
        }
    } // namespace IAction
} // namespace app::classes::types
