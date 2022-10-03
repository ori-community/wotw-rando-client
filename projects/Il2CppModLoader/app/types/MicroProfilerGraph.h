#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MicroProfilerGraph {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MicroProfilerGraph__Class** type_info;
        inline app::MicroProfilerGraph__Class* get_class() {
            return il2cpp::get_class<app::MicroProfilerGraph__Class>(type_info, "", "MicroProfilerGraph");
        }
        inline app::MicroProfilerGraph* create() {
            return il2cpp::create_object<app::MicroProfilerGraph>(get_class());
        }
    } // namespace MicroProfilerGraph
} // namespace app::classes::types
