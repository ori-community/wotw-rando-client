#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DesertEscapeWorm_AdditionalTimelineSet {
        namespace {
            app::DesertEscapeWorm_AdditionalTimelineSet__Class* type_info_ref = nullptr;
        }
        app::DesertEscapeWorm_AdditionalTimelineSet__Class** type_info = &type_info_ref;
        inline app::DesertEscapeWorm_AdditionalTimelineSet__Class* get_class() {
            return il2cpp::get_nested_class<app::DesertEscapeWorm_AdditionalTimelineSet__Class>(type_info, "", "DesertEscapeWorm", "AdditionalTimelineSet");
        }
        inline app::DesertEscapeWorm_AdditionalTimelineSet* create() {
            return il2cpp::create_object<app::DesertEscapeWorm_AdditionalTimelineSet>(get_class());
        }
        inline app::DesertEscapeWorm_AdditionalTimelineSet__Array* create_array(int size) {
            return il2cpp::array_new<app::DesertEscapeWorm_AdditionalTimelineSet__Array>(get_class(), size);
        }
        inline app::DesertEscapeWorm_AdditionalTimelineSet__Array* create_array(const std::vector<app::DesertEscapeWorm_AdditionalTimelineSet*>& items) {
            return il2cpp::array_new<app::DesertEscapeWorm_AdditionalTimelineSet__Array>(get_class(), items);
        }
    } // namespace DesertEscapeWorm_AdditionalTimelineSet
} // namespace app::classes::types
