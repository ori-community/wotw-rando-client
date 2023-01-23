#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StressTester_c__Class.h>
#include <Modloader/app/structs/StressTester_c.h>

namespace app::classes::types {
    namespace StressTester_c {
        inline app::StressTester_c__Class** type_info = (app::StressTester_c__Class**)(modloader::win::memory::resolve_rva(0x04763DA8));
        inline app::StressTester_c__Class* get_class() {
            return il2cpp::get_nested_class<app::StressTester_c__Class>(type_info, "", "StressTester", "<>c");
        }
        inline app::StressTester_c* create() {
            return il2cpp::create_object<app::StressTester_c>(get_class());
        }
    } // namespace StressTester_c
} // namespace app::classes::types
