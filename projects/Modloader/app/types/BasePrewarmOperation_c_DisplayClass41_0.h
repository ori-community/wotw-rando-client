#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BasePrewarmOperation_c_DisplayClass41_0 {
        inline app::BasePrewarmOperation_c_DisplayClass41_0__Class** type_info = (app::BasePrewarmOperation_c_DisplayClass41_0__Class**)(modloader::win::memory::resolve_rva(0x04702648));
        inline app::BasePrewarmOperation_c_DisplayClass41_0__Class* get_class() {
            return il2cpp::get_nested_class<app::BasePrewarmOperation_c_DisplayClass41_0__Class>(type_info, "frameworks.loading.Prewarmers", "BasePrewarmOperation", "<>c__DisplayClass41_0");
        }
        inline app::BasePrewarmOperation_c_DisplayClass41_0* create() {
            return il2cpp::create_object<app::BasePrewarmOperation_c_DisplayClass41_0>(get_class());
        }
    } // namespace BasePrewarmOperation_c_DisplayClass41_0
} // namespace app::classes::types
