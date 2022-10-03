#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiTimelineFloatValueMax {
        namespace {
            app::MultiTimelineFloatValueMax__Class* type_info_ref = nullptr;
        }
        app::MultiTimelineFloatValueMax__Class** type_info = &type_info_ref;
        inline app::MultiTimelineFloatValueMax__Class* get_class() {
            return il2cpp::get_class<app::MultiTimelineFloatValueMax__Class>(type_info, "", "MultiTimelineFloatValueMax");
        }
        inline app::MultiTimelineFloatValueMax* create() {
            return il2cpp::create_object<app::MultiTimelineFloatValueMax>(get_class());
        }
    } // namespace MultiTimelineFloatValueMax
} // namespace app::classes::types
