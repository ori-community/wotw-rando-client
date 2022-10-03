#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Stopwatch {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Stopwatch__Class** type_info;
        inline app::Stopwatch__Class* get_class() {
            return il2cpp::get_class<app::Stopwatch__Class>(type_info, "System.Diagnostics", "Stopwatch");
        }
        inline app::Stopwatch* create() {
            return il2cpp::create_object<app::Stopwatch>(get_class());
        }
    } // namespace Stopwatch
} // namespace app::classes::types
