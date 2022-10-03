#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GarbageCollector {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GarbageCollector__Class** type_info;
        inline app::GarbageCollector__Class* get_class() {
            return il2cpp::get_class<app::GarbageCollector__Class>(type_info, "UnityEngine.Scripting", "GarbageCollector");
        }
        inline app::GarbageCollector* create() {
            return il2cpp::create_object<app::GarbageCollector>(get_class());
        }
    } // namespace GarbageCollector
} // namespace app::classes::types
