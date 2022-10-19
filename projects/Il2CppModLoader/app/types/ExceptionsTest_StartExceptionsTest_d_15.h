#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExceptionsTest_StartExceptionsTest_d_15 {
        inline app::ExceptionsTest_StartExceptionsTest_d_15__Class** type_info = (app::ExceptionsTest_StartExceptionsTest_d_15__Class**)(modloader::win::memory::resolve_rva(0x04771008));
        inline app::ExceptionsTest_StartExceptionsTest_d_15__Class* get_class() {
            return il2cpp::get_nested_class<app::ExceptionsTest_StartExceptionsTest_d_15__Class>(type_info, "", "ExceptionsTest", "<StartExceptionsTest>d__15");
        }
        inline app::ExceptionsTest_StartExceptionsTest_d_15* create() {
            return il2cpp::create_object<app::ExceptionsTest_StartExceptionsTest_d_15>(get_class());
        }
    } // namespace ExceptionsTest_StartExceptionsTest_d_15
} // namespace app::classes::types
