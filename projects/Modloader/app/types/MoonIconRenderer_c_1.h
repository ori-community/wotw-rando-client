#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonIconRenderer_c_1__Class.h>
#include <Modloader/app/structs/MoonIconRenderer_c_1.h>

namespace app::classes::types {
    namespace MoonIconRenderer_c_1 {
        inline app::MoonIconRenderer_c_1__Class** type_info = (app::MoonIconRenderer_c_1__Class**)(modloader::win::memory::resolve_rva(0x0477D538));
        inline app::MoonIconRenderer_c_1__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonIconRenderer_c_1__Class>(type_info, "Moon.UI", "MoonIconRenderer", "<>c");
        }
        inline app::MoonIconRenderer_c_1* create() {
            return il2cpp::create_object<app::MoonIconRenderer_c_1>(get_class());
        }
    } // namespace MoonIconRenderer_c_1
} // namespace app::classes::types
