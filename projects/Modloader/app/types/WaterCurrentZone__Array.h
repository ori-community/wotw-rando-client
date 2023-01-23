#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaterCurrentZone__Array__Class.h>
#include <Modloader/app/structs/WaterCurrentZone__Array.h>

namespace app::classes::types {
    namespace WaterCurrentZone__Array {
        namespace {
            inline app::WaterCurrentZone__Array__Class* type_info_ref = nullptr;
        }
        inline app::WaterCurrentZone__Array__Class** type_info = &type_info_ref;
        inline app::WaterCurrentZone__Array__Class* get_class() {
            return il2cpp::get_class<app::WaterCurrentZone__Array__Class>(type_info, "", "WaterCurrentZone[]");
        }
        inline app::WaterCurrentZone__Array* create() {
            return il2cpp::create_object<app::WaterCurrentZone__Array>(get_class());
        }
    } // namespace WaterCurrentZone__Array
} // namespace app::classes::types
