#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GenericPuppet_GhostGenericResourcesReflectionCache {
        inline app::GenericPuppet_GhostGenericResourcesReflectionCache__Class** type_info = (app::GenericPuppet_GhostGenericResourcesReflectionCache__Class**)(modloader::win::memory::resolve_rva(0x04751278));
        inline app::GenericPuppet_GhostGenericResourcesReflectionCache__Class* get_class() {
            return il2cpp::get_nested_class<app::GenericPuppet_GhostGenericResourcesReflectionCache__Class>(type_info, "", "GenericPuppet", "GhostGenericResourcesReflectionCache");
        }
        inline app::GenericPuppet_GhostGenericResourcesReflectionCache* create() {
            return il2cpp::create_object<app::GenericPuppet_GhostGenericResourcesReflectionCache>(get_class());
        }
    } // namespace GenericPuppet_GhostGenericResourcesReflectionCache
} // namespace app::classes::types
