#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JUnitReporter_TestSuites_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JUnitReporter_TestSuites_c__Class** type_info;
        inline app::JUnitReporter_TestSuites_c__Class* get_class() {
            return il2cpp::get_nested_class<app::JUnitReporter_TestSuites_c__Class>(type_info, "", "JUnitReporter+TestSuites", "<>c");
        }
        inline app::JUnitReporter_TestSuites_c* create() {
            return il2cpp::create_object<app::JUnitReporter_TestSuites_c>(get_class());
        }
    } // namespace JUnitReporter_TestSuites_c
} // namespace app::classes::types
