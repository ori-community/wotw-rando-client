#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiTimelineFloatValueMultiply {
        namespace {
            app::MultiTimelineFloatValueMultiply__Class* type_info_ref = nullptr;
        }
        app::MultiTimelineFloatValueMultiply__Class** type_info = &type_info_ref;
        inline app::MultiTimelineFloatValueMultiply__Class* get_class() {
            return il2cpp::get_class<app::MultiTimelineFloatValueMultiply__Class>(type_info, "", "MultiTimelineFloatValueMultiply");
        }
        inline app::MultiTimelineFloatValueMultiply* create() {
            return il2cpp::create_object<app::MultiTimelineFloatValueMultiply>(get_class());
        }
    } // namespace MultiTimelineFloatValueMultiply
} // namespace app::classes::types
