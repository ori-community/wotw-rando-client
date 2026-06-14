#pragma once
#include <Modloader/app/structs/IGenericCastManager.h>
#include <Modloader/app/structs/IGenericCastManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IGenericCastManager {
        inline app::IGenericCastManager__Class** type_info() {
            static app::IGenericCastManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IGenericCastManager__Class**)(modloader::win::memory::resolve_rva(0x0470D630));
            }
            return cache;
        }
        inline app::IGenericCastManager__Class* get_class() {
            return il2cpp::get_class<app::IGenericCastManager__Class>(type_info(), "", "IGenericCastManager");
        }
    } // namespace IGenericCastManager
} // namespace app::classes::types
