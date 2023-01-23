#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MicroProfilerDataProvider__Class.h>
#include <Modloader/app/structs/MicroProfilerDataProvider.h>

namespace app::classes::types {
    namespace MicroProfilerDataProvider {
        inline app::MicroProfilerDataProvider__Class** type_info = (app::MicroProfilerDataProvider__Class**)(modloader::win::memory::resolve_rva(0x04782AB0));
        inline app::MicroProfilerDataProvider__Class* get_class() {
            return il2cpp::get_class<app::MicroProfilerDataProvider__Class>(type_info, "Moon", "MicroProfilerDataProvider");
        }
        inline app::MicroProfilerDataProvider* create() {
            return il2cpp::create_object<app::MicroProfilerDataProvider>(get_class());
        }
    } // namespace MicroProfilerDataProvider
} // namespace app::classes::types
