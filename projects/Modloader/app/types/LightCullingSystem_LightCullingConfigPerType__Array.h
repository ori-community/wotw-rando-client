#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LightCullingSystem_LightCullingConfigPerType__Array__Class.h>
#include <Modloader/app/structs/LightCullingSystem_LightCullingConfigPerType__Array.h>

namespace app::classes::types {
    namespace LightCullingSystem_LightCullingConfigPerType__Array {
        inline app::LightCullingSystem_LightCullingConfigPerType__Array__Class** type_info = (app::LightCullingSystem_LightCullingConfigPerType__Array__Class**)(modloader::win::memory::resolve_rva(0x04720570));
        inline app::LightCullingSystem_LightCullingConfigPerType__Array__Class* get_class() {
            return il2cpp::get_class<app::LightCullingSystem_LightCullingConfigPerType__Array__Class>(type_info, "", "LightCullingSystem+LightCullingConfigPerType[]");
        }
        inline app::LightCullingSystem_LightCullingConfigPerType__Array* create() {
            return il2cpp::create_object<app::LightCullingSystem_LightCullingConfigPerType__Array>(get_class());
        }
    } // namespace LightCullingSystem_LightCullingConfigPerType__Array
} // namespace app::classes::types
