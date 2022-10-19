#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SerializedBoolUberStateWrapper {
        inline app::SerializedBoolUberStateWrapper__Class** type_info = (app::SerializedBoolUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x0472C4B0));
        inline app::SerializedBoolUberStateWrapper__Class* get_class() {
            return il2cpp::get_class<app::SerializedBoolUberStateWrapper__Class>(type_info, "Moon.UberStateVisualization", "SerializedBoolUberStateWrapper");
        }
        inline app::SerializedBoolUberStateWrapper* create() {
            return il2cpp::create_object<app::SerializedBoolUberStateWrapper>(get_class());
        }
    } // namespace SerializedBoolUberStateWrapper
} // namespace app::classes::types
