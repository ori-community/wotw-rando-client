#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SceneLayers_Layer__Array__Class.h>
#include <Modloader/app/structs/SceneLayers_Layer__Array.h>

namespace app::classes::types {
    namespace SceneLayers_Layer__Array {
        inline app::SceneLayers_Layer__Array__Class** type_info = (app::SceneLayers_Layer__Array__Class**)(modloader::win::memory::resolve_rva(0x04777E58));
        inline app::SceneLayers_Layer__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneLayers_Layer__Array__Class>(type_info, "", "SceneLayers+Layer[]");
        }
        inline app::SceneLayers_Layer__Array* create() {
            return il2cpp::create_object<app::SceneLayers_Layer__Array>(get_class());
        }
    } // namespace SceneLayers_Layer__Array
} // namespace app::classes::types
