#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IMoonShadingZone__Array__Class.h>
#include <Modloader/app/structs/IMoonShadingZone__Array.h>

namespace app::classes::types {
    namespace IMoonShadingZone__Array {
        namespace {
            inline app::IMoonShadingZone__Array__Class* type_info_ref = nullptr;
        }
        inline app::IMoonShadingZone__Array__Class** type_info = &type_info_ref;
        inline app::IMoonShadingZone__Array__Class* get_class() {
            return il2cpp::get_class<app::IMoonShadingZone__Array__Class>(type_info, "", "IMoonShadingZone[]");
        }
        inline app::IMoonShadingZone__Array* create() {
            return il2cpp::create_object<app::IMoonShadingZone__Array>(get_class());
        }
    } // namespace IMoonShadingZone__Array
} // namespace app::classes::types
