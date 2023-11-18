#pragma once
#include <Modloader/app/structs/AkSegmentInfo.h>
#include <Modloader/app/structs/AkSegmentInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkSegmentInfo {
        inline app::AkSegmentInfo__Class** type_info() {
            static app::AkSegmentInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkSegmentInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkSegmentInfo__Class* get_class() {
            return il2cpp::get_class<app::AkSegmentInfo__Class>(type_info(), "", "AkSegmentInfo");
        }
        inline app::AkSegmentInfo* create() {
            return il2cpp::create_object<app::AkSegmentInfo>(get_class());
        }
    } // namespace AkSegmentInfo
} // namespace app::classes::types
