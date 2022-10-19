#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NonSerializedByteUberStateWrapper {
        inline app::NonSerializedByteUberStateWrapper__Class** type_info = (app::NonSerializedByteUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x0475B368));
        inline app::NonSerializedByteUberStateWrapper__Class* get_class() {
            return il2cpp::get_class<app::NonSerializedByteUberStateWrapper__Class>(type_info, "Moon.UberStateVisualization", "NonSerializedByteUberStateWrapper");
        }
        inline app::NonSerializedByteUberStateWrapper* create() {
            return il2cpp::create_object<app::NonSerializedByteUberStateWrapper>(get_class());
        }
    } // namespace NonSerializedByteUberStateWrapper
} // namespace app::classes::types
