#pragma once
#include <Modloader/app/structs/HDRUtils.h>
#include <Modloader/app/structs/HDRUtils__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HDRUtils {
        inline app::HDRUtils__Class** type_info() {
            static app::HDRUtils__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HDRUtils__Class**)(modloader::win::memory::resolve_rva(0x04774BD8));
            }
            return cache;
        }
        inline app::HDRUtils__Class* get_class() {
            return il2cpp::get_class<app::HDRUtils__Class>(type_info(), "Moon", "HDRUtils");
        }
        inline app::HDRUtils* create() {
            return il2cpp::create_object<app::HDRUtils>(get_class());
        }
    } // namespace HDRUtils
} // namespace app::classes::types
