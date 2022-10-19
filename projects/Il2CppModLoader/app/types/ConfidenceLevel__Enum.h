#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConfidenceLevel__Enum {
        inline app::ConfidenceLevel__Enum__Class** type_info = (app::ConfidenceLevel__Enum__Class**)(modloader::win::memory::resolve_rva(0x04775968));
        inline app::ConfidenceLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::ConfidenceLevel__Enum__Class>(type_info, "UnityEngine.Windows.Speech", "ConfidenceLevel");
        }
        inline app::ConfidenceLevel__Enum* create() {
            return il2cpp::create_object<app::ConfidenceLevel__Enum>(get_class());
        }
    } // namespace ConfidenceLevel__Enum
} // namespace app::classes::types
