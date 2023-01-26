#pragma once
#include <Modloader/app/structs/DiskBlurSRP.h>
#include <Modloader/app/structs/DiskBlurSRP__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DiskBlurSRP {
        inline app::DiskBlurSRP__Class** type_info() {
            static app::DiskBlurSRP__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DiskBlurSRP__Class**)(modloader::win::memory::resolve_rva(0x04775DE8));
            }
            return cache;
        }
        inline app::DiskBlurSRP__Class* get_class() {
            return il2cpp::get_class<app::DiskBlurSRP__Class>(type_info(), "Moon.Rendering", "DiskBlurSRP");
        }
        inline app::DiskBlurSRP* create() {
            return il2cpp::create_object<app::DiskBlurSRP>(get_class());
        }
    } // namespace DiskBlurSRP
} // namespace app::classes::types
