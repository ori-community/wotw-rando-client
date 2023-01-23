#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DesertEscapeWorm_AdditionalTimelineSet__Array__Class.h>
#include <Modloader/app/structs/DesertEscapeWorm_AdditionalTimelineSet__Array.h>

namespace app::classes::types {
    namespace DesertEscapeWorm_AdditionalTimelineSet__Array {
        namespace {
            inline app::DesertEscapeWorm_AdditionalTimelineSet__Array__Class* type_info_ref = nullptr;
        }
        inline app::DesertEscapeWorm_AdditionalTimelineSet__Array__Class** type_info = &type_info_ref;
        inline app::DesertEscapeWorm_AdditionalTimelineSet__Array__Class* get_class() {
            return il2cpp::get_class<app::DesertEscapeWorm_AdditionalTimelineSet__Array__Class>(type_info, "", "DesertEscapeWorm+AdditionalTimelineSet[]");
        }
        inline app::DesertEscapeWorm_AdditionalTimelineSet__Array* create() {
            return il2cpp::create_object<app::DesertEscapeWorm_AdditionalTimelineSet__Array>(get_class());
        }
    } // namespace DesertEscapeWorm_AdditionalTimelineSet__Array
} // namespace app::classes::types
