#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExceptionProcessor_c {
        inline app::ExceptionProcessor_c__Class** type_info = (app::ExceptionProcessor_c__Class**)(modloader::win::memory::resolve_rva(0x04795668));
        inline app::ExceptionProcessor_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ExceptionProcessor_c__Class>(type_info, "Moon.ExceptionProcessing", "ExceptionProcessor", "<>c");
        }
        inline app::ExceptionProcessor_c* create() {
            return il2cpp::create_object<app::ExceptionProcessor_c>(get_class());
        }
    } // namespace ExceptionProcessor_c
} // namespace app::classes::types
