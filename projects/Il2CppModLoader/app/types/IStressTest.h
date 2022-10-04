#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IStressTest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IStressTest__Class** type_info;
        inline app::IStressTest__Class* get_class() {
            return il2cpp::get_class<app::IStressTest__Class>(type_info, "", "IStressTest");
        }
        inline app::IStressTest__Array* create_array(int size) {
            return il2cpp::array_new<app::IStressTest__Array>(get_class(), size);
        }
    } // namespace IStressTest
} // namespace app::classes::types
