#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MicroProfiler {
        inline app::MicroProfiler__Class** type_info = (app::MicroProfiler__Class**)(modloader::win::memory::resolve_rva(0x04768898));
        inline app::MicroProfiler__Class* get_class() {
            return il2cpp::get_class<app::MicroProfiler__Class>(type_info, "", "MicroProfiler");
        }
        inline app::MicroProfiler* create() {
            return il2cpp::create_object<app::MicroProfiler>(get_class());
        }
    } // namespace MicroProfiler
} // namespace app::classes::types
