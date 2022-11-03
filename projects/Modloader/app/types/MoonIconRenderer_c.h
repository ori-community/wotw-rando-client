#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonIconRenderer_c {
        inline app::MoonIconRenderer_c__Class** type_info = (app::MoonIconRenderer_c__Class**)(modloader::win::memory::resolve_rva(0x04791220));
        inline app::MoonIconRenderer_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonIconRenderer_c__Class>(type_info, "CatlikeCoding.TextBox", "MoonIconRenderer", "<>c");
        }
        inline app::MoonIconRenderer_c* create() {
            return il2cpp::create_object<app::MoonIconRenderer_c>(get_class());
        }
    } // namespace MoonIconRenderer_c
} // namespace app::classes::types
