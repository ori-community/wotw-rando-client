#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiTimelineFloatValueMin {
        namespace {
            app::MultiTimelineFloatValueMin__Class* type_info_ref = nullptr;
        }
        app::MultiTimelineFloatValueMin__Class** type_info = &type_info_ref;
        inline app::MultiTimelineFloatValueMin__Class* get_class() {
            return il2cpp::get_class<app::MultiTimelineFloatValueMin__Class>(type_info, "", "MultiTimelineFloatValueMin");
        }
        inline app::MultiTimelineFloatValueMin* create() {
            return il2cpp::create_object<app::MultiTimelineFloatValueMin>(get_class());
        }
    } // namespace MultiTimelineFloatValueMin
} // namespace app::classes::types
