#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ReplayScreen__Class.h>
#include <Modloader/app/structs/ReplayScreen.h>

namespace app::classes::types {
    namespace ReplayScreen {
        inline app::ReplayScreen__Class** type_info = (app::ReplayScreen__Class**)(modloader::win::memory::resolve_rva(0x04735C30));
        inline app::ReplayScreen__Class* get_class() {
            return il2cpp::get_class<app::ReplayScreen__Class>(type_info, "", "ReplayScreen");
        }
        inline app::ReplayScreen* create() {
            return il2cpp::create_object<app::ReplayScreen>(get_class());
        }
    } // namespace ReplayScreen
} // namespace app::classes::types
