#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaterFall__Class.h>
#include <Modloader/app/structs/WaterFall.h>

namespace app::classes::types {
    namespace WaterFall {
        namespace {
            inline app::WaterFall__Class* type_info_ref = nullptr;
        }
        inline app::WaterFall__Class** type_info = &type_info_ref;
        inline app::WaterFall__Class* get_class() {
            return il2cpp::get_class<app::WaterFall__Class>(type_info, "Moon", "WaterFall");
        }
        inline app::WaterFall* create() {
            return il2cpp::create_object<app::WaterFall>(get_class());
        }
    } // namespace WaterFall
} // namespace app::classes::types
