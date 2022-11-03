#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimesliceSpikeReporter {
        inline app::TimesliceSpikeReporter__Class** type_info = (app::TimesliceSpikeReporter__Class**)(modloader::win::memory::resolve_rva(0x0476CAE0));
        inline app::TimesliceSpikeReporter__Class* get_class() {
            return il2cpp::get_class<app::TimesliceSpikeReporter__Class>(type_info, "", "TimesliceSpikeReporter");
        }
        inline app::TimesliceSpikeReporter* create() {
            return il2cpp::create_object<app::TimesliceSpikeReporter>(get_class());
        }
    } // namespace TimesliceSpikeReporter
} // namespace app::classes::types
