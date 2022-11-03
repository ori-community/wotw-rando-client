#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExceptionsTest_c {
        inline app::ExceptionsTest_c__Class** type_info = (app::ExceptionsTest_c__Class**)(modloader::win::memory::resolve_rva(0x0476B588));
        inline app::ExceptionsTest_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ExceptionsTest_c__Class>(type_info, "", "ExceptionsTest", "<>c");
        }
        inline app::ExceptionsTest_c* create() {
            return il2cpp::create_object<app::ExceptionsTest_c>(get_class());
        }
    } // namespace ExceptionsTest_c
} // namespace app::classes::types
