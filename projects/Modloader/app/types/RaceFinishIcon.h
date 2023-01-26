#pragma once
#include <Modloader/app/structs/RaceFinishIcon.h>
#include <Modloader/app/structs/RaceFinishIcon__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceFinishIcon {
        inline app::RaceFinishIcon__Class** type_info() {
            static app::RaceFinishIcon__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceFinishIcon__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceFinishIcon__Class* get_class() {
            return il2cpp::get_class<app::RaceFinishIcon__Class>(type_info(), "", "RaceFinishIcon");
        }
        inline app::RaceFinishIcon* create() {
            return il2cpp::create_object<app::RaceFinishIcon>(get_class());
        }
    } // namespace RaceFinishIcon
} // namespace app::classes::types
