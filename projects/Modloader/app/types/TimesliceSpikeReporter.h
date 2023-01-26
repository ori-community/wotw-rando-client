#pragma once
#include <Modloader/app/structs/TimesliceSpikeReporter.h>
#include <Modloader/app/structs/TimesliceSpikeReporter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimesliceSpikeReporter {
        inline app::TimesliceSpikeReporter__Class** type_info() {
            static app::TimesliceSpikeReporter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimesliceSpikeReporter__Class**)(modloader::win::memory::resolve_rva(0x0476CAE0));
            }
            return cache;
        }
        inline app::TimesliceSpikeReporter__Class* get_class() {
            return il2cpp::get_class<app::TimesliceSpikeReporter__Class>(type_info(), "", "TimesliceSpikeReporter");
        }
        inline app::TimesliceSpikeReporter* create() {
            return il2cpp::create_object<app::TimesliceSpikeReporter>(get_class());
        }
    } // namespace TimesliceSpikeReporter
} // namespace app::classes::types
