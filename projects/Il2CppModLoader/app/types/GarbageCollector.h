#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GarbageCollector {
        inline app::GarbageCollector__Class** type_info = (app::GarbageCollector__Class**)(modloader::win::memory::resolve_rva(0x047924B8));
        inline app::GarbageCollector__Class* get_class() {
            return il2cpp::get_class<app::GarbageCollector__Class>(type_info, "UnityEngine.Scripting", "GarbageCollector");
        }
        inline app::GarbageCollector* create() {
            return il2cpp::create_object<app::GarbageCollector>(get_class());
        }
    } // namespace GarbageCollector
} // namespace app::classes::types
