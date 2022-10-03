#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoadTimeMeasurer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoadTimeMeasurer__Class** type_info;
        inline app::LoadTimeMeasurer__Class* get_class() {
            return il2cpp::get_class<app::LoadTimeMeasurer__Class>(type_info, "", "LoadTimeMeasurer");
        }
        inline app::LoadTimeMeasurer* create() {
            return il2cpp::create_object<app::LoadTimeMeasurer>(get_class());
        }
    } // namespace LoadTimeMeasurer
} // namespace app::classes::types
