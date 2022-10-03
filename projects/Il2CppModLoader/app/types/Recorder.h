#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Recorder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Recorder__Class** type_info;
        inline app::Recorder__Class* get_class() {
            return il2cpp::get_class<app::Recorder__Class>(type_info, "UnityEngine.Profiling", "Recorder");
        }
        inline app::Recorder* create() {
            return il2cpp::create_object<app::Recorder>(get_class());
        }
    } // namespace Recorder
} // namespace app::classes::types
