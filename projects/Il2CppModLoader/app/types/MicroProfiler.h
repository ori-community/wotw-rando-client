#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MicroProfiler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MicroProfiler__Class** type_info;
        inline app::MicroProfiler__Class* get_class() {
            return il2cpp::get_class<app::MicroProfiler__Class>(type_info, "", "MicroProfiler");
        }
        inline app::MicroProfiler* create() {
            return il2cpp::create_object<app::MicroProfiler>(get_class());
        }
    } // namespace MicroProfiler
} // namespace app::classes::types
