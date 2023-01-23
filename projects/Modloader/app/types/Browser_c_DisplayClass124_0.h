#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Browser_c_DisplayClass124_0__Class.h>
#include <Modloader/app/structs/Browser_c_DisplayClass124_0.h>

namespace app::classes::types {
    namespace Browser_c_DisplayClass124_0 {
        inline app::Browser_c_DisplayClass124_0__Class** type_info = (app::Browser_c_DisplayClass124_0__Class**)(modloader::win::memory::resolve_rva(0x0476ED38));
        inline app::Browser_c_DisplayClass124_0__Class* get_class() {
            return il2cpp::get_nested_class<app::Browser_c_DisplayClass124_0__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "Browser", "<>c__DisplayClass124_0");
        }
        inline app::Browser_c_DisplayClass124_0* create() {
            return il2cpp::create_object<app::Browser_c_DisplayClass124_0>(get_class());
        }
    } // namespace Browser_c_DisplayClass124_0
} // namespace app::classes::types
