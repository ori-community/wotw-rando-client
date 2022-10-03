#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NanoProfilerDataProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NanoProfilerDataProvider__Class** type_info;
        inline app::NanoProfilerDataProvider__Class* get_class() {
            return il2cpp::get_class<app::NanoProfilerDataProvider__Class>(type_info, "Moon", "NanoProfilerDataProvider");
        }
        inline app::NanoProfilerDataProvider* create() {
            return il2cpp::create_object<app::NanoProfilerDataProvider>(get_class());
        }
    } // namespace NanoProfilerDataProvider
} // namespace app::classes::types
