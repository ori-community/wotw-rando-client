#pragma once
#include <Modloader/app/structs/LightCullingSystem_LightCullingConfigPerType__Array.h>
#include <Modloader/app/structs/LightCullingSystem_LightCullingConfigPerType__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightCullingSystem_LightCullingConfigPerType__Array {
        inline app::LightCullingSystem_LightCullingConfigPerType__Array__Class** type_info() {
            static app::LightCullingSystem_LightCullingConfigPerType__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LightCullingSystem_LightCullingConfigPerType__Array__Class**)(modloader::win::memory::resolve_rva(0x04720570));
            }
            return cache;
        }
        inline app::LightCullingSystem_LightCullingConfigPerType__Array__Class* get_class() {
            return il2cpp::get_class<app::LightCullingSystem_LightCullingConfigPerType__Array__Class>(type_info(), "", "LightCullingSystem+LightCullingConfigPerType[]");
        }
        inline app::LightCullingSystem_LightCullingConfigPerType__Array* create() {
            return il2cpp::create_object<app::LightCullingSystem_LightCullingConfigPerType__Array>(get_class());
        }
    } // namespace LightCullingSystem_LightCullingConfigPerType__Array
} // namespace app::classes::types
