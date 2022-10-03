#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrainEntityTester_BrainTesterEntries__Enum {
        namespace {
            app::BrainEntityTester_BrainTesterEntries__Enum__Class* type_info_ref = nullptr;
        }
        app::BrainEntityTester_BrainTesterEntries__Enum__Class** type_info = &type_info_ref;
        inline app::BrainEntityTester_BrainTesterEntries__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BrainEntityTester_BrainTesterEntries__Enum__Class>(type_info, "", "BrainEntityTester", "BrainTesterEntries");
        }
        inline app::BrainEntityTester_BrainTesterEntries__Enum* create() {
            return il2cpp::create_object<app::BrainEntityTester_BrainTesterEntries__Enum>(get_class());
        }
    } // namespace BrainEntityTester_BrainTesterEntries__Enum
} // namespace app::classes::types
