#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GuiBeginArea__Class.h>
#include <Modloader/app/structs/GuiBeginArea.h>

namespace app::classes::types {
    namespace GuiBeginArea {
        namespace {
            inline app::GuiBeginArea__Class* type_info_ref = nullptr;
        }
        inline app::GuiBeginArea__Class** type_info = &type_info_ref;
        inline app::GuiBeginArea__Class* get_class() {
            return il2cpp::get_class<app::GuiBeginArea__Class>(type_info, "Moon.Gui", "GuiBeginArea");
        }
        inline app::GuiBeginArea* create() {
            return il2cpp::create_object<app::GuiBeginArea>(get_class());
        }
    } // namespace GuiBeginArea
} // namespace app::classes::types
