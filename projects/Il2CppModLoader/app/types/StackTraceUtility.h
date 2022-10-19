#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StackTraceUtility {
        inline app::StackTraceUtility__Class** type_info = (app::StackTraceUtility__Class**)(modloader::win::memory::resolve_rva(0x04731658));
        inline app::StackTraceUtility__Class* get_class() {
            return il2cpp::get_class<app::StackTraceUtility__Class>(type_info, "UnityEngine", "StackTraceUtility");
        }
        inline app::StackTraceUtility* create() {
            return il2cpp::create_object<app::StackTraceUtility>(get_class());
        }
    } // namespace StackTraceUtility
} // namespace app::classes::types
