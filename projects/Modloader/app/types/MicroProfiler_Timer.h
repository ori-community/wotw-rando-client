#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MicroProfiler_Timer {
        namespace {
            inline app::MicroProfiler_Timer__Class* type_info_ref = nullptr;
        }
        inline app::MicroProfiler_Timer__Class** type_info = &type_info_ref;
        inline app::MicroProfiler_Timer__Class* get_class() {
            return il2cpp::get_nested_class<app::MicroProfiler_Timer__Class>(type_info, "", "MicroProfiler", "Timer");
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
