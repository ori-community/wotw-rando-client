#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GenericPuppet_GhostGenericResourcesReflectionCache {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GenericPuppet_GhostGenericResourcesReflectionCache__Class** type_info;
        inline app::GenericPuppet_GhostGenericResourcesReflectionCache__Class* get_class() {
            return il2cpp::get_nested_class<app::GenericPuppet_GhostGenericResourcesReflectionCache__Class>(type_info, "", "GenericPuppet", "GhostGenericResourcesReflectionCache");
        }
        inline app::GenericPuppet_GhostGenericResourcesReflectionCache* create() {
            return il2cpp::create_object<app::GenericPuppet_GhostGenericResourcesReflectionCache>(get_class());
        }
    } // namespace GenericPuppet_GhostGenericResourcesReflectionCache
} // namespace app::classes::types
