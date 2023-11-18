#pragma once
#include <Modloader/app/structs/OptionsScreen_c.h>
#include <Modloader/app/structs/OptionsScreen_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OptionsScreen_c {
        inline app::OptionsScreen_c__Class** type_info() {
            static app::OptionsScreen_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OptionsScreen_c__Class**)(modloader::win::memory::resolve_rva(0x04719140));
            }
            return cache;
        }
        inline app::OptionsScreen_c__Class* get_class() {
            return il2cpp::get_nested_class<app::OptionsScreen_c__Class>(type_info(), "", "OptionsScreen", "<>c");
        }
        inline app::OptionsScreen_c* create() {
            return il2cpp::create_object<app::OptionsScreen_c>(get_class());
        }
    } // namespace OptionsScreen_c
} // namespace app::classes::types
