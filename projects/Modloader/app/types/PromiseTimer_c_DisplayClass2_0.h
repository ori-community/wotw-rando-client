#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PromiseTimer_c_DisplayClass2_0__Class.h>
#include <Modloader/app/structs/PromiseTimer_c_DisplayClass2_0.h>

namespace app::classes::types {
    namespace PromiseTimer_c_DisplayClass2_0 {
        inline app::PromiseTimer_c_DisplayClass2_0__Class** type_info = (app::PromiseTimer_c_DisplayClass2_0__Class**)(modloader::win::memory::resolve_rva(0x04769858));
        inline app::PromiseTimer_c_DisplayClass2_0__Class* get_class() {
            return il2cpp::get_nested_class<app::PromiseTimer_c_DisplayClass2_0__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "PromiseTimer", "<>c__DisplayClass2_0");
        }
        inline app::PromiseTimer_c_DisplayClass2_0* create() {
            return il2cpp::create_object<app::PromiseTimer_c_DisplayClass2_0>(get_class());
        }
    } // namespace PromiseTimer_c_DisplayClass2_0
} // namespace app::classes::types
