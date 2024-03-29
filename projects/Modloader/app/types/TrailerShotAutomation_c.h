#pragma once
#include <Modloader/app/structs/TrailerShotAutomation_c.h>
#include <Modloader/app/structs/TrailerShotAutomation_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TrailerShotAutomation_c {
        inline app::TrailerShotAutomation_c__Class** type_info() {
            static app::TrailerShotAutomation_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TrailerShotAutomation_c__Class**)(modloader::win::memory::resolve_rva(0x04770788));
            }
            return cache;
        }
        inline app::TrailerShotAutomation_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TrailerShotAutomation_c__Class>(type_info(), "", "TrailerShotAutomation", "<>c");
        }
        inline app::TrailerShotAutomation_c* create() {
            return il2cpp::create_object<app::TrailerShotAutomation_c>(get_class());
        }
    } // namespace TrailerShotAutomation_c
} // namespace app::classes::types
