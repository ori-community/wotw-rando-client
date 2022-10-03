#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProfilerExt {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ProfilerExt__Class** type_info;
        inline app::ProfilerExt__Class* get_class() {
            return il2cpp::get_class<app::ProfilerExt__Class>(type_info, "Moon.Rendering", "ProfilerExt");
        }
        inline app::ProfilerExt* create() {
            return il2cpp::create_object<app::ProfilerExt>(get_class());
        }
    } // namespace ProfilerExt
} // namespace app::classes::types
