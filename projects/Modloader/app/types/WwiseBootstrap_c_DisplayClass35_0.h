#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WwiseBootstrap_c_DisplayClass35_0 {
        inline app::WwiseBootstrap_c_DisplayClass35_0__Class** type_info = (app::WwiseBootstrap_c_DisplayClass35_0__Class**)(modloader::win::memory::resolve_rva(0x04770B38));
        inline app::WwiseBootstrap_c_DisplayClass35_0__Class* get_class() {
            return il2cpp::get_nested_class<app::WwiseBootstrap_c_DisplayClass35_0__Class>(type_info, "Moon.Wwise", "WwiseBootstrap", "<>c__DisplayClass35_0");
        }
        inline app::WwiseBootstrap_c_DisplayClass35_0* create() {
            return il2cpp::create_object<app::WwiseBootstrap_c_DisplayClass35_0>(get_class());
        }
    } // namespace WwiseBootstrap_c_DisplayClass35_0
} // namespace app::classes::types
