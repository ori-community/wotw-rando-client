#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TestReporter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TestReporter__Class** type_info;
        inline app::TestReporter__Class* get_class() {
            return il2cpp::get_class<app::TestReporter__Class>(type_info, "", "TestReporter");
        }
        inline app::TestReporter* create() {
            return il2cpp::create_object<app::TestReporter>(get_class());
        }
    } // namespace TestReporter
} // namespace app::classes::types
