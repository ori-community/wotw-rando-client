#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShadingZoneRendererTarget__Array__Class.h>
#include <Modloader/app/structs/ShadingZoneRendererTarget__Array.h>

namespace app::classes::types {
    namespace ShadingZoneRendererTarget__Array {
        namespace {
            inline app::ShadingZoneRendererTarget__Array__Class* type_info_ref = nullptr;
        }
        inline app::ShadingZoneRendererTarget__Array__Class** type_info = &type_info_ref;
        inline app::ShadingZoneRendererTarget__Array__Class* get_class() {
            return il2cpp::get_class<app::ShadingZoneRendererTarget__Array__Class>(type_info, "", "ShadingZoneRendererTarget[]");
        }
        inline app::ShadingZoneRendererTarget__Array* create() {
            return il2cpp::create_object<app::ShadingZoneRendererTarget__Array>(get_class());
        }
    } // namespace ShadingZoneRendererTarget__Array
} // namespace app::classes::types
