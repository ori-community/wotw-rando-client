#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExceptionProcessor {
        inline app::ExceptionProcessor__Class** type_info = (app::ExceptionProcessor__Class**)(modloader::win::memory::resolve_rva(0x04780C48));
        inline app::ExceptionProcessor__Class* get_class() {
            return il2cpp::get_class<app::ExceptionProcessor__Class>(type_info, "Moon.ExceptionProcessing", "ExceptionProcessor");
        }
        inline app::ExceptionProcessor* create() {
            return il2cpp::create_object<app::ExceptionProcessor>(get_class());
        }
    } // namespace ExceptionProcessor
} // namespace app::classes::types
