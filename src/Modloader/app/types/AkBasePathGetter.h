#pragma once
#include <Modloader/app/structs/AkBasePathGetter.h>
#include <Modloader/app/structs/AkBasePathGetter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkBasePathGetter {
        inline app::AkBasePathGetter__Class** type_info() {
            static app::AkBasePathGetter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkBasePathGetter__Class**)(modloader::win::memory::resolve_rva(0x04727DC8));
            }
            return cache;
        }
        inline app::AkBasePathGetter__Class* get_class() {
            return il2cpp::get_class<app::AkBasePathGetter__Class>(type_info(), "", "AkBasePathGetter");
        }
        inline app::AkBasePathGetter* create() {
            return il2cpp::create_object<app::AkBasePathGetter>(get_class());
        }
    } // namespace AkBasePathGetter
} // namespace app::classes::types
