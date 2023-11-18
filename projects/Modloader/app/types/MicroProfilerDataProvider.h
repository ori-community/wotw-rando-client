#pragma once
#include <Modloader/app/structs/MicroProfilerDataProvider.h>
#include <Modloader/app/structs/MicroProfilerDataProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MicroProfilerDataProvider {
        inline app::MicroProfilerDataProvider__Class** type_info() {
            static app::MicroProfilerDataProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MicroProfilerDataProvider__Class**)(modloader::win::memory::resolve_rva(0x04782AB0));
            }
            return cache;
        }
        inline app::MicroProfilerDataProvider__Class* get_class() {
            return il2cpp::get_class<app::MicroProfilerDataProvider__Class>(type_info(), "Moon", "MicroProfilerDataProvider");
        }
        inline app::MicroProfilerDataProvider* create() {
            return il2cpp::create_object<app::MicroProfilerDataProvider>(get_class());
        }
    } // namespace MicroProfilerDataProvider
} // namespace app::classes::types
