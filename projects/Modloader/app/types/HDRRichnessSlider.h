#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HDRRichnessSlider__Class.h>
#include <Modloader/app/structs/HDRRichnessSlider.h>

namespace app::classes::types {
    namespace HDRRichnessSlider {
        namespace {
            inline app::HDRRichnessSlider__Class* type_info_ref = nullptr;
        }
        inline app::HDRRichnessSlider__Class** type_info = &type_info_ref;
        inline app::HDRRichnessSlider__Class* get_class() {
            return il2cpp::get_class<app::HDRRichnessSlider__Class>(type_info, "", "HDRRichnessSlider");
        }
        inline app::HDRRichnessSlider* create() {
            return il2cpp::create_object<app::HDRRichnessSlider>(get_class());
        }
    } // namespace HDRRichnessSlider
} // namespace app::classes::types
