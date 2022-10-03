#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MicroProfilerInspector {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MicroProfilerInspector__Class** type_info;
        inline app::MicroProfilerInspector__Class* get_class() {
            return il2cpp::get_class<app::MicroProfilerInspector__Class>(type_info, "", "MicroProfilerInspector");
        }
        inline app::MicroProfilerInspector* create() {
            return il2cpp::create_object<app::MicroProfilerInspector>(get_class());
        }
    } // namespace MicroProfilerInspector
} // namespace app::classes::types
