#pragma once
#include <Modloader/app/structs/ShadingZoneRendererTarget__Array.h>
#include <Modloader/app/structs/ShadingZoneRendererTarget__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShadingZoneRendererTarget__Array {
        inline app::ShadingZoneRendererTarget__Array__Class** type_info() {
            static app::ShadingZoneRendererTarget__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShadingZoneRendererTarget__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShadingZoneRendererTarget__Array__Class* get_class() {
            return il2cpp::get_class<app::ShadingZoneRendererTarget__Array__Class>(type_info(), "", "ShadingZoneRendererTarget[]");
        }
        inline app::ShadingZoneRendererTarget__Array* create() {
            return il2cpp::create_object<app::ShadingZoneRendererTarget__Array>(get_class());
        }
    } // namespace ShadingZoneRendererTarget__Array
} // namespace app::classes::types
