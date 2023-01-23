#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExternalKeyboard_c_DisplayClass16_0__Class.h>
#include <Modloader/app/structs/ExternalKeyboard_c_DisplayClass16_0.h>

namespace app::classes::types {
    namespace ExternalKeyboard_c_DisplayClass16_0 {
        inline app::ExternalKeyboard_c_DisplayClass16_0__Class** type_info = (app::ExternalKeyboard_c_DisplayClass16_0__Class**)(modloader::win::memory::resolve_rva(0x047652B0));
        inline app::ExternalKeyboard_c_DisplayClass16_0__Class* get_class() {
            return il2cpp::get_nested_class<app::ExternalKeyboard_c_DisplayClass16_0__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "ExternalKeyboard", "<>c__DisplayClass16_0");
        }
        inline app::ExternalKeyboard_c_DisplayClass16_0* create() {
            return il2cpp::create_object<app::ExternalKeyboard_c_DisplayClass16_0>(get_class());
        }
    } // namespace ExternalKeyboard_c_DisplayClass16_0
} // namespace app::classes::types
