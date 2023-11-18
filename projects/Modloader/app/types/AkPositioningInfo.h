#pragma once
#include <Modloader/app/structs/AkPositioningInfo.h>
#include <Modloader/app/structs/AkPositioningInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkPositioningInfo {
        inline app::AkPositioningInfo__Class** type_info() {
            static app::AkPositioningInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkPositioningInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkPositioningInfo__Class* get_class() {
            return il2cpp::get_class<app::AkPositioningInfo__Class>(type_info(), "", "AkPositioningInfo");
        }
        inline app::AkPositioningInfo* create() {
            return il2cpp::create_object<app::AkPositioningInfo>(get_class());
        }
    } // namespace AkPositioningInfo
} // namespace app::classes::types
