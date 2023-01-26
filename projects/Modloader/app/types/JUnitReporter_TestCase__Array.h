#pragma once
#include <Modloader/app/structs/JUnitReporter_TestCase__Array.h>
#include <Modloader/app/structs/JUnitReporter_TestCase__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JUnitReporter_TestCase__Array {
        inline app::JUnitReporter_TestCase__Array__Class** type_info() {
            static app::JUnitReporter_TestCase__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JUnitReporter_TestCase__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JUnitReporter_TestCase__Array__Class* get_class() {
            return il2cpp::get_class<app::JUnitReporter_TestCase__Array__Class>(type_info(), "", "JUnitReporter+TestCase[]");
        }
        inline app::JUnitReporter_TestCase__Array* create() {
            return il2cpp::create_object<app::JUnitReporter_TestCase__Array>(get_class());
        }
    } // namespace JUnitReporter_TestCase__Array
} // namespace app::classes::types
