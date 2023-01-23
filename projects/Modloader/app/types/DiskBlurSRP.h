#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DiskBlurSRP__Class.h>
#include <Modloader/app/structs/DiskBlurSRP.h>

namespace app::classes::types {
    namespace DiskBlurSRP {
        inline app::DiskBlurSRP__Class** type_info = (app::DiskBlurSRP__Class**)(modloader::win::memory::resolve_rva(0x04775DE8));
        inline app::DiskBlurSRP__Class* get_class() {
            return il2cpp::get_class<app::DiskBlurSRP__Class>(type_info, "Moon.Rendering", "DiskBlurSRP");
        }
        inline app::DiskBlurSRP* create() {
            return il2cpp::create_object<app::DiskBlurSRP>(get_class());
        }
    } // namespace DiskBlurSRP
} // namespace app::classes::types
