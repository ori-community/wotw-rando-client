#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GardenerScreen__Class.h>
#include <Modloader/app/structs/GardenerScreen.h>

namespace app::classes::types {
    namespace GardenerScreen {
        inline app::GardenerScreen__Class** type_info = (app::GardenerScreen__Class**)(modloader::win::memory::resolve_rva(0x047871C8));
        inline app::GardenerScreen__Class* get_class() {
            return il2cpp::get_class<app::GardenerScreen__Class>(type_info, "", "GardenerScreen");
        }
        inline app::GardenerScreen* create() {
            return il2cpp::create_object<app::GardenerScreen>(get_class());
        }
    } // namespace GardenerScreen
} // namespace app::classes::types
