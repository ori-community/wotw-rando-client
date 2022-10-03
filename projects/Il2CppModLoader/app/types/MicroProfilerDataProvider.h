#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MicroProfilerDataProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MicroProfilerDataProvider__Class** type_info;
        inline app::MicroProfilerDataProvider__Class* get_class() {
            return il2cpp::get_class<app::MicroProfilerDataProvider__Class>(type_info, "Moon", "MicroProfilerDataProvider");
        }
        inline app::MicroProfilerDataProvider* create() {
            return il2cpp::create_object<app::MicroProfilerDataProvider>(get_class());
        }
    } // namespace MicroProfilerDataProvider
} // namespace app::classes::types
