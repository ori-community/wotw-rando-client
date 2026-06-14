#pragma once
#include <Modloader/app/structs/IAnimatorDriver.h>
#include <Modloader/app/structs/IAnimatorDriver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IAnimatorDriver {
        inline app::IAnimatorDriver__Class** type_info() {
            static app::IAnimatorDriver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IAnimatorDriver__Class**)(modloader::win::memory::resolve_rva(0x04767DA0));
            }
            return cache;
        }
        inline app::IAnimatorDriver__Class* get_class() {
            return il2cpp::get_class<app::IAnimatorDriver__Class>(type_info(), "", "IAnimatorDriver");
        }
    } // namespace IAnimatorDriver
} // namespace app::classes::types
