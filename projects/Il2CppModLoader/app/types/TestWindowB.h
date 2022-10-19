#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TestWindowB {
        namespace {
            inline app::TestWindowB__Class* type_info_ref = nullptr;
        }
        inline app::TestWindowB__Class** type_info = &type_info_ref;
        inline app::TestWindowB__Class* get_class() {
            return il2cpp::get_class<app::TestWindowB__Class>(type_info, "", "TestWindowB");
        }
        inline app::TestWindowB* create() {
            return il2cpp::create_object<app::TestWindowB>(get_class());
        }
    } // namespace TestWindowB
} // namespace app::classes::types
