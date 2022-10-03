#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DesertEscapeWorm_AdditionalTimelineSet__Array {
        namespace {
            app::DesertEscapeWorm_AdditionalTimelineSet__Array__Class* type_info_ref = nullptr;
        }
        app::DesertEscapeWorm_AdditionalTimelineSet__Array__Class** type_info = &type_info_ref;
        inline app::DesertEscapeWorm_AdditionalTimelineSet__Array__Class* get_class() {
            return il2cpp::get_class<app::DesertEscapeWorm_AdditionalTimelineSet__Array__Class>(type_info, "", "DesertEscapeWorm+AdditionalTimelineSet[]");
        }
        inline app::DesertEscapeWorm_AdditionalTimelineSet__Array* create() {
            return il2cpp::create_object<app::DesertEscapeWorm_AdditionalTimelineSet__Array>(get_class());
        }
    } // namespace DesertEscapeWorm_AdditionalTimelineSet__Array
} // namespace app::classes::types
