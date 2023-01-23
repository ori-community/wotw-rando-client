#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StartupState__Class.h>
#include <Modloader/app/structs/StartupState.h>

namespace app::classes::types {
    namespace StartupState {
        inline app::StartupState__Class** type_info = (app::StartupState__Class**)(modloader::win::memory::resolve_rva(0x04792540));
        inline app::StartupState__Class* get_class() {
            return il2cpp::get_class<app::StartupState__Class>(type_info, "", "StartupState");
        }
        inline app::StartupState* create() {
            return il2cpp::create_object<app::StartupState>(get_class());
        }
    } // namespace StartupState
} // namespace app::classes::types
