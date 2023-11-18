#pragma once
#include <Modloader/app/structs/ExternalKeyboard_c_DisplayClass16_0.h>
#include <Modloader/app/structs/ExternalKeyboard_c_DisplayClass16_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExternalKeyboard_c_DisplayClass16_0 {
        inline app::ExternalKeyboard_c_DisplayClass16_0__Class** type_info() {
            static app::ExternalKeyboard_c_DisplayClass16_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExternalKeyboard_c_DisplayClass16_0__Class**)(modloader::win::memory::resolve_rva(0x047652B0));
            }
            return cache;
        }
        inline app::ExternalKeyboard_c_DisplayClass16_0__Class* get_class() {
            return il2cpp::get_nested_class<app::ExternalKeyboard_c_DisplayClass16_0__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "ExternalKeyboard", "<>c__DisplayClass16_0");
        }
        inline app::ExternalKeyboard_c_DisplayClass16_0* create() {
            return il2cpp::create_object<app::ExternalKeyboard_c_DisplayClass16_0>(get_class());
        }
    } // namespace ExternalKeyboard_c_DisplayClass16_0
} // namespace app::classes::types
