#pragma once
#include <Modloader/app/structs/ExternalTimelineRecord__Array.h>
#include <Modloader/app/structs/ExternalTimelineRecord__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExternalTimelineRecord__Array {
        inline app::ExternalTimelineRecord__Array__Class** type_info() {
            static app::ExternalTimelineRecord__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExternalTimelineRecord__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExternalTimelineRecord__Array__Class* get_class() {
            return il2cpp::get_class<app::ExternalTimelineRecord__Array__Class>(type_info(), "Moon.Timeline", "ExternalTimelineRecord[]");
        }
        inline app::ExternalTimelineRecord__Array* create() {
            return il2cpp::create_object<app::ExternalTimelineRecord__Array>(get_class());
        }
    } // namespace ExternalTimelineRecord__Array
} // namespace app::classes::types
