#pragma once
#include <Modloader/app/structs/BasePrewarmOperation_c_DisplayClass41_0.h>
#include <Modloader/app/structs/BasePrewarmOperation_c_DisplayClass41_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BasePrewarmOperation_c_DisplayClass41_0 {
        inline app::BasePrewarmOperation_c_DisplayClass41_0__Class** type_info() {
            static app::BasePrewarmOperation_c_DisplayClass41_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BasePrewarmOperation_c_DisplayClass41_0__Class**)(modloader::win::memory::resolve_rva(0x04702648));
            }
            return cache;
        }
        inline app::BasePrewarmOperation_c_DisplayClass41_0__Class* get_class() {
            return il2cpp::get_nested_class<app::BasePrewarmOperation_c_DisplayClass41_0__Class>(type_info(), "frameworks.loading.Prewarmers", "BasePrewarmOperation", "<>c__DisplayClass41_0");
        }
        inline app::BasePrewarmOperation_c_DisplayClass41_0* create() {
            return il2cpp::create_object<app::BasePrewarmOperation_c_DisplayClass41_0>(get_class());
        }
    } // namespace BasePrewarmOperation_c_DisplayClass41_0
} // namespace app::classes::types
