#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HeatUpPlatform__Class.h>
#include <Modloader/app/structs/HeatUpPlatform.h>
#include <Modloader/app/structs/HeatUpPlatform__Array.h>

namespace app::classes::types {
    namespace HeatUpPlatform {
        namespace {
            inline app::HeatUpPlatform__Class* type_info_ref = nullptr;
        }
        inline app::HeatUpPlatform__Class** type_info = &type_info_ref;
        inline app::HeatUpPlatform__Class* get_class() {
            return il2cpp::get_class<app::HeatUpPlatform__Class>(type_info, "", "HeatUpPlatform");
        }
        inline app::HeatUpPlatform* create() {
            return il2cpp::create_object<app::HeatUpPlatform>(get_class());
        }
        inline app::HeatUpPlatform__Array* create_array(int size) {
            return il2cpp::array_new<app::HeatUpPlatform__Array>(get_class(), size);
        }
        inline app::HeatUpPlatform__Array* create_array(const std::vector<app::HeatUpPlatform*>& items) {
            return il2cpp::array_new<app::HeatUpPlatform__Array>(get_class(), items);
        }
    } // namespace HeatUpPlatform
} // namespace app::classes::types
