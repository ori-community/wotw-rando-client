#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NanoProfilerDataProvider {
        inline app::NanoProfilerDataProvider__Class** type_info = (app::NanoProfilerDataProvider__Class**)(modloader::win::memory::resolve_rva(0x04750040));
        inline app::NanoProfilerDataProvider__Class* get_class() {
            return il2cpp::get_class<app::NanoProfilerDataProvider__Class>(type_info, "Moon", "NanoProfilerDataProvider");
        }
        inline app::NanoProfilerDataProvider* create() {
            return il2cpp::create_object<app::NanoProfilerDataProvider>(get_class());
        }
    } // namespace NanoProfilerDataProvider
} // namespace app::classes::types
