#pragma once
#include <Modloader/app/structs/ResourceManager_CultureNameResourceSetPair.h>
#include <Modloader/app/structs/ResourceManager_CultureNameResourceSetPair__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResourceManager_CultureNameResourceSetPair {
        inline app::ResourceManager_CultureNameResourceSetPair__Class** type_info() {
            static app::ResourceManager_CultureNameResourceSetPair__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ResourceManager_CultureNameResourceSetPair__Class**)(modloader::win::memory::resolve_rva(0x04771A00));
            }
            return cache;
        }
        inline app::ResourceManager_CultureNameResourceSetPair__Class* get_class() {
            return il2cpp::get_nested_class<app::ResourceManager_CultureNameResourceSetPair__Class>(type_info(), "System.Resources", "ResourceManager", "CultureNameResourceSetPair");
        }
        inline app::ResourceManager_CultureNameResourceSetPair* create() {
            return il2cpp::create_object<app::ResourceManager_CultureNameResourceSetPair>(get_class());
        }
    } // namespace ResourceManager_CultureNameResourceSetPair
} // namespace app::classes::types
