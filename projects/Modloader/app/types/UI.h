#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

#include <Modloader/app/structs/UI.h>

namespace app::classes::types {
    namespace UI {
        inline app::UI__Class** type_info = (app::UI__Class**)(modloader::win::memory::resolve_rva(0x04783338));
        inline app::UI__Class* get_class() {
            return il2cpp::get_class<app::UI__Class>(type_info, "Game", "UI");
        }
        inline app::UI* create() {
            return il2cpp::create_object<app::UI>(get_class());
        }
    } // namespace UI
} // namespace app::classes::types
