#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GuiBeginVertical {
        namespace {
            inline app::GuiBeginVertical__Class* type_info_ref = nullptr;
        }
        inline app::GuiBeginVertical__Class** type_info = &type_info_ref;
        inline app::GuiBeginVertical__Class* get_class() {
            return il2cpp::get_class<app::GuiBeginVertical__Class>(type_info, "Moon.Gui", "GuiBeginVertical");
        }
        inline app::GuiBeginVertical* create() {
            return il2cpp::create_object<app::GuiBeginVertical>(get_class());
        }
    } // namespace GuiBeginVertical
} // namespace app::classes::types
