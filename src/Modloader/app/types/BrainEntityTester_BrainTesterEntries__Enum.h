#pragma once
#include <Modloader/app/structs/BrainEntityTester_BrainTesterEntries__Enum.h>
#include <Modloader/app/structs/BrainEntityTester_BrainTesterEntries__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrainEntityTester_BrainTesterEntries__Enum {
        inline app::BrainEntityTester_BrainTesterEntries__Enum__Class** type_info() {
            static app::BrainEntityTester_BrainTesterEntries__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BrainEntityTester_BrainTesterEntries__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BrainEntityTester_BrainTesterEntries__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BrainEntityTester_BrainTesterEntries__Enum__Class>(type_info(), "", "BrainEntityTester", "BrainTesterEntries");
        }
        inline app::BrainEntityTester_BrainTesterEntries__Enum* create() {
            return il2cpp::create_object<app::BrainEntityTester_BrainTesterEntries__Enum>(get_class());
        }
    } // namespace BrainEntityTester_BrainTesterEntries__Enum
} // namespace app::classes::types
