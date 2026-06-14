#pragma once
#include <Modloader/app/structs/IProfilingDataProvider.h>
#include <Modloader/app/structs/IProfilingDataProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IProfilingDataProvider {
        inline app::IProfilingDataProvider__Class** type_info() {
            static app::IProfilingDataProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IProfilingDataProvider__Class**)(modloader::win::memory::resolve_rva(0x0473B468));
            }
            return cache;
        }
        inline app::IProfilingDataProvider__Class* get_class() {
            return il2cpp::get_class<app::IProfilingDataProvider__Class>(type_info(), "Moon", "IProfilingDataProvider");
        }
    } // namespace IProfilingDataProvider
} // namespace app::classes::types
