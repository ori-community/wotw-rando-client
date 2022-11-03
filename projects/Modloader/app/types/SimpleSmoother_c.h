#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SimpleSmoother_c {
        inline app::SimpleSmoother_c__Class** type_info = (app::SimpleSmoother_c__Class**)(modloader::win::memory::resolve_rva(0x04760E18));
        inline app::SimpleSmoother_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleSmoother_c__Class>(type_info, "TriangleNet.Smoothing", "SimpleSmoother", "<>c");
        }
        inline app::SimpleSmoother_c* create() {
            return il2cpp::create_object<app::SimpleSmoother_c>(get_class());
        }
    } // namespace SimpleSmoother_c
} // namespace app::classes::types
