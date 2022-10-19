#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RefTest {
        namespace {
            inline app::RefTest__Class* type_info_ref = nullptr;
        }
        inline app::RefTest__Class** type_info = &type_info_ref;
        inline app::RefTest__Class* get_class() {
            return il2cpp::get_class<app::RefTest__Class>(type_info, "", "RefTest");
        }
        inline app::RefTest* create() {
            return il2cpp::create_object<app::RefTest>(get_class());
        }
    } // namespace RefTest
} // namespace app::classes::types
