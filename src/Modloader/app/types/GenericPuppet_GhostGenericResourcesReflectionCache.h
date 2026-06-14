#pragma once
#include <Modloader/app/structs/GenericPuppet_GhostGenericResourcesReflectionCache.h>
#include <Modloader/app/structs/GenericPuppet_GhostGenericResourcesReflectionCache__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericPuppet_GhostGenericResourcesReflectionCache {
        inline app::GenericPuppet_GhostGenericResourcesReflectionCache__Class** type_info() {
            static app::GenericPuppet_GhostGenericResourcesReflectionCache__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GenericPuppet_GhostGenericResourcesReflectionCache__Class**)(modloader::win::memory::resolve_rva(0x04751278));
            }
            return cache;
        }
        inline app::GenericPuppet_GhostGenericResourcesReflectionCache__Class* get_class() {
            return il2cpp::get_nested_class<app::GenericPuppet_GhostGenericResourcesReflectionCache__Class>(type_info(), "", "GenericPuppet", "GhostGenericResourcesReflectionCache");
        }
        inline app::GenericPuppet_GhostGenericResourcesReflectionCache* create() {
            return il2cpp::create_object<app::GenericPuppet_GhostGenericResourcesReflectionCache>(get_class());
        }
    } // namespace GenericPuppet_GhostGenericResourcesReflectionCache
} // namespace app::classes::types
