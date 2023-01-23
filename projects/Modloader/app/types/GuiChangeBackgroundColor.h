#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GuiChangeBackgroundColor__Class.h>
#include <Modloader/app/structs/GuiChangeBackgroundColor.h>

namespace app::classes::types {
    namespace GuiChangeBackgroundColor {
        namespace {
            inline app::GuiChangeBackgroundColor__Class* type_info_ref = nullptr;
        }
        inline app::GuiChangeBackgroundColor__Class** type_info = &type_info_ref;
        inline app::GuiChangeBackgroundColor__Class* get_class() {
            return il2cpp::get_class<app::GuiChangeBackgroundColor__Class>(type_info, "Moon.Gui", "GuiChangeBackgroundColor");
        }
        inline app::GuiChangeBackgroundColor* create() {
            return il2cpp::create_object<app::GuiChangeBackgroundColor>(get_class());
        }
    } // namespace GuiChangeBackgroundColor
} // namespace app::classes::types
