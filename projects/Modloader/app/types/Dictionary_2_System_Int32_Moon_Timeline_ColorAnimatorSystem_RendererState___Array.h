#pragma once
#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array {
        inline app::Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array__Class** type_info() {
            static app::Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array__Class**)(modloader::win::memory::resolve_rva(0x04792FC8));
            }
            return cache;
        }
        inline app::Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[System.Int32,Moon.Timeline.ColorAnimatorSystem+RendererState][]");
        }
        inline app::Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array>(get_class());
        }
    } // namespace Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array
} // namespace app::classes::types
