#pragma once
#include <Modloader/app/structs/NanoProfilerDataProvider.h>
#include <Modloader/app/structs/NanoProfilerDataProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NanoProfilerDataProvider {
        inline app::NanoProfilerDataProvider__Class** type_info() {
            static app::NanoProfilerDataProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NanoProfilerDataProvider__Class**)(modloader::win::memory::resolve_rva(0x04750040));
            }
            return cache;
        }
        inline app::NanoProfilerDataProvider__Class* get_class() {
            return il2cpp::get_class<app::NanoProfilerDataProvider__Class>(type_info(), "Moon", "NanoProfilerDataProvider");
        }
        inline app::NanoProfilerDataProvider* create() {
            return il2cpp::create_object<app::NanoProfilerDataProvider>(get_class());
        }
    } // namespace NanoProfilerDataProvider
} // namespace app::classes::types
