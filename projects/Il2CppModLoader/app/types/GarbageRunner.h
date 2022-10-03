#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GarbageRunner {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GarbageRunner__Class** type_info;
        inline app::GarbageRunner__Class* get_class() {
            return il2cpp::get_class<app::GarbageRunner__Class>(type_info, "", "GarbageRunner");
        }
        inline app::GarbageRunner* create() {
            return il2cpp::create_object<app::GarbageRunner>(get_class());
        }
    } // namespace GarbageRunner
} // namespace app::classes::types
