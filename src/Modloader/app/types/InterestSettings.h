#pragma once
#include <Modloader/app/structs/InterestSettings.h>
#include <Modloader/app/structs/InterestSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InterestSettings {
        inline app::InterestSettings__Class** type_info() {
            static app::InterestSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InterestSettings__Class**)(modloader::win::memory::resolve_rva(0x0474D1A0));
            }
            return cache;
        }
        inline app::InterestSettings__Class* get_class() {
            return il2cpp::get_class<app::InterestSettings__Class>(type_info(), "Moon", "InterestSettings");
        }
        inline app::InterestSettings* create() {
            return il2cpp::create_object<app::InterestSettings>(get_class());
        }
    } // namespace InterestSettings
} // namespace app::classes::types
