#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NonSerializedIntUberStateWrapper {
        inline app::NonSerializedIntUberStateWrapper__Class** type_info = (app::NonSerializedIntUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x04720AF8));
        inline app::NonSerializedIntUberStateWrapper__Class* get_class() {
            return il2cpp::get_class<app::NonSerializedIntUberStateWrapper__Class>(type_info, "Moon.UberStateVisualization", "NonSerializedIntUberStateWrapper");
        }
        inline app::NonSerializedIntUberStateWrapper* create() {
            return il2cpp::create_object<app::NonSerializedIntUberStateWrapper>(get_class());
        }
    } // namespace NonSerializedIntUberStateWrapper
} // namespace app::classes::types
