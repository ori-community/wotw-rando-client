#pragma once
#include <Modloader/app/structs/DesertEscapeWorm_AdditionalTimelineSet__Array.h>
#include <Modloader/app/structs/DesertEscapeWorm_AdditionalTimelineSet__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DesertEscapeWorm_AdditionalTimelineSet__Array {
        inline app::DesertEscapeWorm_AdditionalTimelineSet__Array__Class** type_info() {
            static app::DesertEscapeWorm_AdditionalTimelineSet__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DesertEscapeWorm_AdditionalTimelineSet__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DesertEscapeWorm_AdditionalTimelineSet__Array__Class* get_class() {
            return il2cpp::get_class<app::DesertEscapeWorm_AdditionalTimelineSet__Array__Class>(type_info(), "", "DesertEscapeWorm+AdditionalTimelineSet[]");
        }
        inline app::DesertEscapeWorm_AdditionalTimelineSet__Array* create() {
            return il2cpp::create_object<app::DesertEscapeWorm_AdditionalTimelineSet__Array>(get_class());
        }
    } // namespace DesertEscapeWorm_AdditionalTimelineSet__Array
} // namespace app::classes::types
