#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MetaData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MetaData__Class** type_info;
        inline app::MetaData__Class* get_class() {
            return il2cpp::get_class<app::MetaData__Class>(type_info, "UnityEngine.Profiling.Memory.Experimental", "MetaData");
        }
        inline app::MetaData* create() {
            return il2cpp::create_object<app::MetaData>(get_class());
        }
    } // namespace MetaData
} // namespace app::classes::types
