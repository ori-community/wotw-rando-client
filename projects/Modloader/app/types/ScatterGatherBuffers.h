#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScatterGatherBuffers {
        inline app::ScatterGatherBuffers__Class** type_info = (app::ScatterGatherBuffers__Class**)(modloader::win::memory::resolve_rva(0x047450E8));
        inline app::ScatterGatherBuffers__Class* get_class() {
            return il2cpp::get_class<app::ScatterGatherBuffers__Class>(type_info, "System.Net", "ScatterGatherBuffers");
        }
        inline app::ScatterGatherBuffers* create() {
            return il2cpp::create_object<app::ScatterGatherBuffers>(get_class());
        }
    } // namespace ScatterGatherBuffers
} // namespace app::classes::types
