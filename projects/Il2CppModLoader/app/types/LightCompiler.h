#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightCompiler {
        inline app::LightCompiler__Class** type_info = (app::LightCompiler__Class**)(modloader::win::memory::resolve_rva(0x04778E58));
        inline app::LightCompiler__Class* get_class() {
            return il2cpp::get_class<app::LightCompiler__Class>(type_info, "System.Linq.Expressions.Interpreter", "LightCompiler");
        }
        inline app::LightCompiler* create() {
            return il2cpp::create_object<app::LightCompiler>(get_class());
        }
    } // namespace LightCompiler
} // namespace app::classes::types
