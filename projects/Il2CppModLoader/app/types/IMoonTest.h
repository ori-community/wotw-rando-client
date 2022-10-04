#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMoonTest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMoonTest__Class** type_info;
        inline app::IMoonTest__Class* get_class() {
            return il2cpp::get_class<app::IMoonTest__Class>(type_info, "", "IMoonTest");
        }
        inline app::IMoonTest* create() {
            return il2cpp::create_object<app::IMoonTest>(get_class());
        }
    } // namespace IMoonTest
} // namespace app::classes::types
