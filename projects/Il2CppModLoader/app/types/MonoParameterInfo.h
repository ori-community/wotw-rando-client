#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoParameterInfo {
        inline app::MonoParameterInfo__Class** type_info = (app::MonoParameterInfo__Class**)(modloader::win::memory::resolve_rva(0x04784B10));
        inline app::MonoParameterInfo__Class* get_class() {
            return il2cpp::get_class<app::MonoParameterInfo__Class>(type_info, "System.Reflection", "MonoParameterInfo");
        }
        inline app::MonoParameterInfo* create() {
            return il2cpp::create_object<app::MonoParameterInfo>(get_class());
        }
    } // namespace MonoParameterInfo
} // namespace app::classes::types
