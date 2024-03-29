#pragma once
#include <Modloader/app/structs/ExternalKeyboard_c.h>
#include <Modloader/app/structs/ExternalKeyboard_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExternalKeyboard_c {
        inline app::ExternalKeyboard_c__Class** type_info() {
            static app::ExternalKeyboard_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExternalKeyboard_c__Class**)(modloader::win::memory::resolve_rva(0x0477EE88));
            }
            return cache;
        }
        inline app::ExternalKeyboard_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ExternalKeyboard_c__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "ExternalKeyboard", "<>c");
        }
        inline app::ExternalKeyboard_c* create() {
            return il2cpp::create_object<app::ExternalKeyboard_c>(get_class());
        }
    } // namespace ExternalKeyboard_c
} // namespace app::classes::types
