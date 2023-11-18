#pragma once
#include <Modloader/app/structs/MicroProfiler_SampleStats.h>
#include <Modloader/app/structs/MicroProfiler_SampleStats__Array.h>
#include <Modloader/app/structs/MicroProfiler_SampleStats__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MicroProfiler_SampleStats {
        inline app::MicroProfiler_SampleStats__Class** type_info() {
            static app::MicroProfiler_SampleStats__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MicroProfiler_SampleStats__Class**)(modloader::win::memory::resolve_rva(0x04773B28));
            }
            return cache;
        }
        inline app::MicroProfiler_SampleStats__Class* get_class() {
            return il2cpp::get_nested_class<app::MicroProfiler_SampleStats__Class>(type_info(), "", "MicroProfiler", "SampleStats");
        }
        inline app::MicroProfiler_SampleStats* create() {
            return il2cpp::create_object<app::MicroProfiler_SampleStats>(get_class());
        }
        inline app::MicroProfiler_SampleStats__Array* create_array(int size) {
            return il2cpp::array_new<app::MicroProfiler_SampleStats__Array>(get_class(), size);
        }
        inline app::MicroProfiler_SampleStats__Array* create_array(const std::vector<app::MicroProfiler_SampleStats*>& items) {
            return il2cpp::array_new<app::MicroProfiler_SampleStats__Array>(get_class(), items);
        }
    } // namespace MicroProfiler_SampleStats
} // namespace app::classes::types
