#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaterPoisonCloud__Class.h>
#include <Modloader/app/structs/WaterPoisonCloud.h>

namespace app::classes::types {
    namespace WaterPoisonCloud {
        namespace {
            inline app::WaterPoisonCloud__Class* type_info_ref = nullptr;
        }
        inline app::WaterPoisonCloud__Class** type_info = &type_info_ref;
        inline app::WaterPoisonCloud__Class* get_class() {
            return il2cpp::get_class<app::WaterPoisonCloud__Class>(type_info, "", "WaterPoisonCloud");
        }
        inline app::WaterPoisonCloud* create() {
            return il2cpp::create_object<app::WaterPoisonCloud>(get_class());
        }
    } // namespace WaterPoisonCloud
} // namespace app::classes::types
