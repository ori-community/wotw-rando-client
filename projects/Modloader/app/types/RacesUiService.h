#pragma once
#include <Modloader/app/structs/RacesUiService.h>
#include <Modloader/app/structs/RacesUiService__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RacesUiService {
        inline app::RacesUiService__Class** type_info() {
            static app::RacesUiService__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RacesUiService__Class**)(modloader::win::memory::resolve_rva(0x0472C1B8));
            }
            return cache;
        }
        inline app::RacesUiService__Class* get_class() {
            return il2cpp::get_class<app::RacesUiService__Class>(type_info(), "", "RacesUiService");
        }
        inline app::RacesUiService* create() {
            return il2cpp::create_object<app::RacesUiService>(get_class());
        }
    } // namespace RacesUiService
} // namespace app::classes::types
