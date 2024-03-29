#pragma once
#include <Modloader/app/structs/Dropdown_Show_c_AnonStorey1.h>
#include <Modloader/app/structs/Dropdown_Show_c_AnonStorey1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dropdown_Show_c_AnonStorey1 {
        inline app::Dropdown_Show_c_AnonStorey1__Class** type_info() {
            static app::Dropdown_Show_c_AnonStorey1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Dropdown_Show_c_AnonStorey1__Class**)(modloader::win::memory::resolve_rva(0x0476B9B8));
            }
            return cache;
        }
        inline app::Dropdown_Show_c_AnonStorey1__Class* get_class() {
            return il2cpp::get_nested_class<app::Dropdown_Show_c_AnonStorey1__Class>(type_info(), "UnityEngine.UI", "Dropdown", "<Show>c__AnonStorey1");
        }
        inline app::Dropdown_Show_c_AnonStorey1* create() {
            return il2cpp::create_object<app::Dropdown_Show_c_AnonStorey1>(get_class());
        }
    } // namespace Dropdown_Show_c_AnonStorey1
} // namespace app::classes::types
