#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FormatterServices_c_DisplayClass9_0__Class.h>
#include <Modloader/app/structs/FormatterServices_c_DisplayClass9_0.h>

namespace app::classes::types {
    namespace FormatterServices_c_DisplayClass9_0 {
        inline app::FormatterServices_c_DisplayClass9_0__Class** type_info = (app::FormatterServices_c_DisplayClass9_0__Class**)(modloader::win::memory::resolve_rva(0x04719AD0));
        inline app::FormatterServices_c_DisplayClass9_0__Class* get_class() {
            return il2cpp::get_nested_class<app::FormatterServices_c_DisplayClass9_0__Class>(type_info, "System.Runtime.Serialization", "FormatterServices", "<>c__DisplayClass9_0");
        }
        inline app::FormatterServices_c_DisplayClass9_0* create() {
            return il2cpp::create_object<app::FormatterServices_c_DisplayClass9_0>(get_class());
        }
    } // namespace FormatterServices_c_DisplayClass9_0
} // namespace app::classes::types
