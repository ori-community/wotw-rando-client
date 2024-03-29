#pragma once
#include <Modloader/app/structs/MicroProfiler_Timer.h>
#include <Modloader/app/structs/MicroProfiler_Timer__Array.h>
#include <Modloader/app/structs/MicroProfiler_Timer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MicroProfiler_Timer {
        inline app::MicroProfiler_Timer__Class** type_info() {
            static app::MicroProfiler_Timer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MicroProfiler_Timer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MicroProfiler_Timer__Class* get_class() {
            return il2cpp::get_nested_class<app::MicroProfiler_Timer__Class>(type_info(), "", "MicroProfiler", "Timer");
        }
        inline app::MicroProfiler_Timer* create() {
            return il2cpp::create_object<app::MicroProfiler_Timer>(get_class());
        }
        inline app::MicroProfiler_Timer__Array* create_array(int size) {
            return il2cpp::array_new<app::MicroProfiler_Timer__Array>(get_class(), size);
        }
        inline app::MicroProfiler_Timer__Array* create_array(const std::vector<app::MicroProfiler_Timer*>& items) {
            return il2cpp::array_new<app::MicroProfiler_Timer__Array>(get_class(), items);
        }
    } // namespace MicroProfiler_Timer
} // namespace app::classes::types
