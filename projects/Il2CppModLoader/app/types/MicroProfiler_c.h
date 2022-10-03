#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MicroProfiler_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MicroProfiler_c__Class** type_info;
        inline app::MicroProfiler_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MicroProfiler_c__Class>(type_info, "", "MicroProfiler", "<>c");
        }
        inline app::MicroProfiler_c* create() {
            return il2cpp::create_object<app::MicroProfiler_c>(get_class());
        }
    } // namespace MicroProfiler_c
} // namespace app::classes::types
