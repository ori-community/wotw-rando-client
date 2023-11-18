#pragma once
#include <Modloader/app/structs/LightCullingSystem_LightCullingGroupId__Enum.h>
#include <Modloader/app/structs/LightCullingSystem_LightCullingGroupId__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightCullingSystem_LightCullingGroupId__Enum {
        inline app::LightCullingSystem_LightCullingGroupId__Enum__Class** type_info() {
            static app::LightCullingSystem_LightCullingGroupId__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LightCullingSystem_LightCullingGroupId__Enum__Class**)(modloader::win::memory::resolve_rva(0x047921D0));
            }
            return cache;
        }
        inline app::LightCullingSystem_LightCullingGroupId__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCullingSystem_LightCullingGroupId__Enum__Class>(type_info(), "", "LightCullingSystem", "LightCullingGroupId");
        }
        inline app::LightCullingSystem_LightCullingGroupId__Enum* create() {
            return il2cpp::create_object<app::LightCullingSystem_LightCullingGroupId__Enum>(get_class());
        }
    } // namespace LightCullingSystem_LightCullingGroupId__Enum
} // namespace app::classes::types
