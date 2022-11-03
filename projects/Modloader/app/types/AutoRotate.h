#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AutoRotate {
        inline app::AutoRotate__Class** type_info = (app::AutoRotate__Class**)(modloader::win::memory::resolve_rva(0x047801D8));
        inline app::AutoRotate__Class* get_class() {
            return il2cpp::get_class<app::AutoRotate__Class>(type_info, "", "AutoRotate");
        }
        inline app::AutoRotate* create() {
            return il2cpp::create_object<app::AutoRotate>(get_class());
        }
    } // namespace AutoRotate
} // namespace app::classes::types
