#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CallbackHelpers_c_DisplayClass5_0 {
        inline app::CallbackHelpers_c_DisplayClass5_0__Class** type_info = (app::CallbackHelpers_c_DisplayClass5_0__Class**)(modloader::win::memory::resolve_rva(0x0478EFD0));
        inline app::CallbackHelpers_c_DisplayClass5_0__Class* get_class() {
            return il2cpp::get_nested_class<app::CallbackHelpers_c_DisplayClass5_0__Class>(type_info, "Mono.Net.Security.Private", "CallbackHelpers", "<>c__DisplayClass5_0");
        }
        inline app::CallbackHelpers_c_DisplayClass5_0* create() {
            return il2cpp::create_object<app::CallbackHelpers_c_DisplayClass5_0>(get_class());
        }
    } // namespace CallbackHelpers_c_DisplayClass5_0
} // namespace app::classes::types
