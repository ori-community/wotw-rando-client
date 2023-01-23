#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SaveSlotsUI__Class.h>
#include <Modloader/app/structs/SaveSlotsUI.h>

namespace app::classes::types {
    namespace SaveSlotsUI {
        inline app::SaveSlotsUI__Class** type_info = (app::SaveSlotsUI__Class**)(modloader::win::memory::resolve_rva(0x047094A0));
        inline app::SaveSlotsUI__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotsUI__Class>(type_info, "", "SaveSlotsUI");
        }
        inline app::SaveSlotsUI* create() {
            return il2cpp::create_object<app::SaveSlotsUI>(get_class());
        }
    } // namespace SaveSlotsUI
} // namespace app::classes::types
