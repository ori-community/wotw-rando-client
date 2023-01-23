#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Promise_c_DisplayClass52_0__Class.h>
#include <Modloader/app/structs/Promise_c_DisplayClass52_0.h>

namespace app::classes::types {
    namespace Promise_c_DisplayClass52_0 {
        inline app::Promise_c_DisplayClass52_0__Class** type_info = (app::Promise_c_DisplayClass52_0__Class**)(modloader::win::memory::resolve_rva(0x047150F8));
        inline app::Promise_c_DisplayClass52_0__Class* get_class() {
            return il2cpp::get_nested_class<app::Promise_c_DisplayClass52_0__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "Promise", "<>c__DisplayClass52_0");
        }
        inline app::Promise_c_DisplayClass52_0* create() {
            return il2cpp::create_object<app::Promise_c_DisplayClass52_0>(get_class());
        }
    } // namespace Promise_c_DisplayClass52_0
} // namespace app::classes::types
