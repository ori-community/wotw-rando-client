#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MainThreadSleepTester {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MainThreadSleepTester__Class** type_info;
        inline app::MainThreadSleepTester__Class* get_class() {
            return il2cpp::get_class<app::MainThreadSleepTester__Class>(type_info, "", "MainThreadSleepTester");
        }
        inline app::MainThreadSleepTester* create() {
            return il2cpp::create_object<app::MainThreadSleepTester>(get_class());
        }
    } // namespace MainThreadSleepTester
} // namespace app::classes::types
