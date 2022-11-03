#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StressTester_TesterState__Enum {
        inline app::StressTester_TesterState__Enum__Class** type_info = (app::StressTester_TesterState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04749570));
        inline app::StressTester_TesterState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StressTester_TesterState__Enum__Class>(type_info, "", "StressTester", "TesterState");
        }
        inline app::StressTester_TesterState__Enum* create() {
            return il2cpp::create_object<app::StressTester_TesterState__Enum>(get_class());
        }
    } // namespace StressTester_TesterState__Enum
} // namespace app::classes::types
