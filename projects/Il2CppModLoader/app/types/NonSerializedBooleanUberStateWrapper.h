#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NonSerializedBooleanUberStateWrapper {
        inline app::NonSerializedBooleanUberStateWrapper__Class** type_info = (app::NonSerializedBooleanUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x047750E8));
        inline app::NonSerializedBooleanUberStateWrapper__Class* get_class() {
            return il2cpp::get_class<app::NonSerializedBooleanUberStateWrapper__Class>(type_info, "Moon.UberStateVisualization", "NonSerializedBooleanUberStateWrapper");
        }
        inline app::NonSerializedBooleanUberStateWrapper* create() {
            return il2cpp::create_object<app::NonSerializedBooleanUberStateWrapper>(get_class());
        }
    } // namespace NonSerializedBooleanUberStateWrapper
} // namespace app::classes::types
