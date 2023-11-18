#pragma once
#include <Modloader/app/structs/MoonIconRenderer_c.h>
#include <Modloader/app/structs/MoonIconRenderer_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonIconRenderer_c {
        inline app::MoonIconRenderer_c__Class** type_info() {
            static app::MoonIconRenderer_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonIconRenderer_c__Class**)(modloader::win::memory::resolve_rva(0x04791220));
            }
            return cache;
        }
        inline app::MoonIconRenderer_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonIconRenderer_c__Class>(type_info(), "CatlikeCoding.TextBox", "MoonIconRenderer", "<>c");
        }
        inline app::MoonIconRenderer_c* create() {
            return il2cpp::create_object<app::MoonIconRenderer_c>(get_class());
        }
    } // namespace MoonIconRenderer_c
} // namespace app::classes::types
