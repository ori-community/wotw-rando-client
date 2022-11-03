#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SimpleAsyncResult_c_DisplayClass9_0 {
        inline app::SimpleAsyncResult_c_DisplayClass9_0__Class** type_info = (app::SimpleAsyncResult_c_DisplayClass9_0__Class**)(modloader::win::memory::resolve_rva(0x04704B08));
        inline app::SimpleAsyncResult_c_DisplayClass9_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleAsyncResult_c_DisplayClass9_0__Class>(type_info, "System.Net", "SimpleAsyncResult", "<>c__DisplayClass9_0");
        }
        inline app::SimpleAsyncResult_c_DisplayClass9_0* create() {
            return il2cpp::create_object<app::SimpleAsyncResult_c_DisplayClass9_0>(get_class());
        }
    } // namespace SimpleAsyncResult_c_DisplayClass9_0
} // namespace app::classes::types
