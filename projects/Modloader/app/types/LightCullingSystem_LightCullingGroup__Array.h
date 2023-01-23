#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LightCullingSystem_LightCullingGroup__Array__Class.h>
#include <Modloader/app/structs/LightCullingSystem_LightCullingGroup__Array.h>

namespace app::classes::types {
    namespace LightCullingSystem_LightCullingGroup__Array {
        inline app::LightCullingSystem_LightCullingGroup__Array__Class** type_info = (app::LightCullingSystem_LightCullingGroup__Array__Class**)(modloader::win::memory::resolve_rva(0x0474FF30));
        inline app::LightCullingSystem_LightCullingGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::LightCullingSystem_LightCullingGroup__Array__Class>(type_info, "", "LightCullingSystem+LightCullingGroup[]");
        }
        inline app::LightCullingSystem_LightCullingGroup__Array* create() {
            return il2cpp::create_object<app::LightCullingSystem_LightCullingGroup__Array>(get_class());
        }
    } // namespace LightCullingSystem_LightCullingGroup__Array
} // namespace app::classes::types
