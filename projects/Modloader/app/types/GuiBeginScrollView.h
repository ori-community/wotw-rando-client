#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GuiBeginScrollView {
        namespace {
            inline app::GuiBeginScrollView__Class* type_info_ref = nullptr;
        }
        inline app::GuiBeginScrollView__Class** type_info = &type_info_ref;
        inline app::GuiBeginScrollView__Class* get_class() {
            return il2cpp::get_class<app::GuiBeginScrollView__Class>(type_info, "Moon.Gui", "GuiBeginScrollView");
        }
        inline app::GuiBeginScrollView* create() {
            return il2cpp::create_object<app::GuiBeginScrollView>(get_class());
        }
    } // namespace GuiBeginScrollView
} // namespace app::classes::types
