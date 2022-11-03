#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WotwWwiseBootstrapConfiguration_c_DisplayClass7_0 {
        inline app::WotwWwiseBootstrapConfiguration_c_DisplayClass7_0__Class** type_info = (app::WotwWwiseBootstrapConfiguration_c_DisplayClass7_0__Class**)(modloader::win::memory::resolve_rva(0x0476FF48));
        inline app::WotwWwiseBootstrapConfiguration_c_DisplayClass7_0__Class* get_class() {
            return il2cpp::get_nested_class<app::WotwWwiseBootstrapConfiguration_c_DisplayClass7_0__Class>(type_info, "", "WotwWwiseBootstrapConfiguration", "<>c__DisplayClass7_0");
        }
        inline app::WotwWwiseBootstrapConfiguration_c_DisplayClass7_0* create() {
            return il2cpp::create_object<app::WotwWwiseBootstrapConfiguration_c_DisplayClass7_0>(get_class());
        }
    } // namespace WotwWwiseBootstrapConfiguration_c_DisplayClass7_0
} // namespace app::classes::types
