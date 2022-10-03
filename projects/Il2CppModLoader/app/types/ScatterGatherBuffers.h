#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScatterGatherBuffers {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScatterGatherBuffers__Class** type_info;
        inline app::ScatterGatherBuffers__Class* get_class() {
            return il2cpp::get_class<app::ScatterGatherBuffers__Class>(type_info, "System.Net", "ScatterGatherBuffers");
        }
        inline app::ScatterGatherBuffers* create() {
            return il2cpp::create_object<app::ScatterGatherBuffers>(get_class());
        }
    } // namespace ScatterGatherBuffers
} // namespace app::classes::types
