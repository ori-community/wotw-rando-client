#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Varying2DSoundProvider {
        inline app::Varying2DSoundProvider__Class** type_info = (app::Varying2DSoundProvider__Class**)(modloader::win::memory::resolve_rva(0x0474C388));
        inline app::Varying2DSoundProvider__Class* get_class() {
            return il2cpp::get_class<app::Varying2DSoundProvider__Class>(type_info, "", "Varying2DSoundProvider");
        }
        inline app::Varying2DSoundProvider* create() {
            return il2cpp::create_object<app::Varying2DSoundProvider>(get_class());
        }
    } // namespace Varying2DSoundProvider
} // namespace app::classes::types
