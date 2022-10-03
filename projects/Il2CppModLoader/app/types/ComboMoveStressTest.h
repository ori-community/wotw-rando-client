#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ComboMoveStressTest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ComboMoveStressTest__Class** type_info;
        inline app::ComboMoveStressTest__Class* get_class() {
            return il2cpp::get_class<app::ComboMoveStressTest__Class>(type_info, "", "ComboMoveStressTest");
        }
        inline app::ComboMoveStressTest* create() {
            return il2cpp::create_object<app::ComboMoveStressTest>(get_class());
        }
        inline app::ComboMoveStressTest__Array* create_array(int size) {
            return il2cpp::array_new<app::ComboMoveStressTest__Array>(get_class(), size);
        }
    } // namespace ComboMoveStressTest
} // namespace app::classes::types
