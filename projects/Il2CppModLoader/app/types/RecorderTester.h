#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecorderTester {
        namespace {
            app::RecorderTester__Class* type_info_ref = nullptr;
        }
        app::RecorderTester__Class** type_info = &type_info_ref;
        inline app::RecorderTester__Class* get_class() {
            return il2cpp::get_class<app::RecorderTester__Class>(type_info, "", "RecorderTester");
        }
        inline app::RecorderTester* create() {
            return il2cpp::create_object<app::RecorderTester>(get_class());
        }
    } // namespace RecorderTester
} // namespace app::classes::types
