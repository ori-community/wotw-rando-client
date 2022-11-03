#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Statistic {
        inline app::Statistic__Class** type_info = (app::Statistic__Class**)(modloader::win::memory::resolve_rva(0x04721BB8));
        inline app::Statistic__Class* get_class() {
            return il2cpp::get_class<app::Statistic__Class>(type_info, "TriangleNet.Tools", "Statistic");
        }
        inline app::Statistic* create() {
            return il2cpp::create_object<app::Statistic>(get_class());
        }
    } // namespace Statistic
} // namespace app::classes::types
