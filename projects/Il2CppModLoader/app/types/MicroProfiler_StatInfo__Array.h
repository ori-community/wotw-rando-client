#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MicroProfiler_StatInfo__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MicroProfiler_StatInfo__Array__Class** type_info;
        inline app::MicroProfiler_StatInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::MicroProfiler_StatInfo__Array__Class>(type_info, "", "MicroProfiler+StatInfo[]");
        }
        inline app::MicroProfiler_StatInfo__Array* create() {
            return il2cpp::create_object<app::MicroProfiler_StatInfo__Array>(get_class());
        }
    } // namespace MicroProfiler_StatInfo__Array
} // namespace app::classes::types
