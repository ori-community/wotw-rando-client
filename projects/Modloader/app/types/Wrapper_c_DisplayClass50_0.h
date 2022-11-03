#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Wrapper_c_DisplayClass50_0 {
        inline app::Wrapper_c_DisplayClass50_0__Class** type_info = (app::Wrapper_c_DisplayClass50_0__Class**)(modloader::win::memory::resolve_rva(0x0476C1A0));
        inline app::Wrapper_c_DisplayClass50_0__Class* get_class() {
            return il2cpp::get_nested_class<app::Wrapper_c_DisplayClass50_0__Class>(type_info, "Grdk", "Wrapper", "<>c__DisplayClass50_0");
        }
        inline app::Wrapper_c_DisplayClass50_0* create() {
            return il2cpp::create_object<app::Wrapper_c_DisplayClass50_0>(get_class());
        }
    } // namespace Wrapper_c_DisplayClass50_0
} // namespace app::classes::types
