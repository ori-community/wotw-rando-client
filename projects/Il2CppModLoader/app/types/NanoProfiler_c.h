#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NanoProfiler_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NanoProfiler_c__Class** type_info;
        inline app::NanoProfiler_c__Class* get_class() {
            return il2cpp::get_nested_class<app::NanoProfiler_c__Class>(type_info, "Moon.nanoProfiler", "NanoProfiler", "<>c");
        }
        inline app::NanoProfiler_c* create() {
            return il2cpp::create_object<app::NanoProfiler_c>(get_class());
        }
    } // namespace NanoProfiler_c
} // namespace app::classes::types
