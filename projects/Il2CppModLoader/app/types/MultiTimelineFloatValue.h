#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiTimelineFloatValue {
        namespace {
            app::MultiTimelineFloatValue__Class* type_info_ref = nullptr;
        }
        app::MultiTimelineFloatValue__Class** type_info = &type_info_ref;
        inline app::MultiTimelineFloatValue__Class* get_class() {
            return il2cpp::get_class<app::MultiTimelineFloatValue__Class>(type_info, "", "MultiTimelineFloatValue");
        }
        inline app::MultiTimelineFloatValue* create() {
            return il2cpp::create_object<app::MultiTimelineFloatValue>(get_class());
        }
    } // namespace MultiTimelineFloatValue
} // namespace app::classes::types
