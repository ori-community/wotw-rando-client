#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MicroProfiler_SampleStats {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MicroProfiler_SampleStats__Class** type_info;
        inline app::MicroProfiler_SampleStats__Class* get_class() {
            return il2cpp::get_nested_class<app::MicroProfiler_SampleStats__Class>(type_info, "", "MicroProfiler", "SampleStats");
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
