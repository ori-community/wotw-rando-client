#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Histogram_Channel__Enum {
        namespace {
            app::Histogram_Channel__Enum__Class* type_info_ref = nullptr;
        }
        app::Histogram_Channel__Enum__Class** type_info = &type_info_ref;
        inline app::Histogram_Channel__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Histogram_Channel__Enum__Class>(type_info, "Colorful", "Histogram", "Channel");
        }
        inline app::Histogram_Channel__Enum* create() {
            return il2cpp::create_object<app::Histogram_Channel__Enum>(get_class());
        }
    } // namespace Histogram_Channel__Enum
} // namespace app::classes::types
