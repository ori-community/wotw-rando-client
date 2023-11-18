#pragma once
#include <Modloader/app/structs/JUnitReporter_TestSuites.h>
#include <Modloader/app/structs/JUnitReporter_TestSuites__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JUnitReporter_TestSuites {
        inline app::JUnitReporter_TestSuites__Class** type_info() {
            static app::JUnitReporter_TestSuites__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JUnitReporter_TestSuites__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JUnitReporter_TestSuites__Class* get_class() {
            return il2cpp::get_nested_class<app::JUnitReporter_TestSuites__Class>(type_info(), "", "JUnitReporter", "TestSuites");
        }
        inline app::JUnitReporter_TestSuites* create() {
            return il2cpp::create_object<app::JUnitReporter_TestSuites>(get_class());
        }
    } // namespace JUnitReporter_TestSuites
} // namespace app::classes::types
