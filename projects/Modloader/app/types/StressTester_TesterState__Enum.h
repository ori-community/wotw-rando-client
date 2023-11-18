#pragma once
#include <Modloader/app/structs/StressTester_TesterState__Enum.h>
#include <Modloader/app/structs/StressTester_TesterState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StressTester_TesterState__Enum {
        inline app::StressTester_TesterState__Enum__Class** type_info() {
            static app::StressTester_TesterState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StressTester_TesterState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04749570));
            }
            return cache;
        }
        inline app::StressTester_TesterState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StressTester_TesterState__Enum__Class>(type_info(), "", "StressTester", "TesterState");
        }
        inline app::StressTester_TesterState__Enum* create() {
            return il2cpp::create_object<app::StressTester_TesterState__Enum>(get_class());
        }
    } // namespace StressTester_TesterState__Enum
} // namespace app::classes::types
