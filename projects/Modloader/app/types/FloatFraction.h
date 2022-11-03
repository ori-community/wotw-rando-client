#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FloatFraction {
        namespace {
            inline app::FloatFraction__Class* type_info_ref = nullptr;
        }
        inline app::FloatFraction__Class** type_info = &type_info_ref;
        inline app::FloatFraction__Class* get_class() {
            return il2cpp::get_class<app::FloatFraction__Class>(type_info, "", "FloatFraction");
        }
        inline app::FloatFraction* create() {
            return il2cpp::create_object<app::FloatFraction>(get_class());
        }
        inline app::FloatFraction__Boxed* box(app::FloatFraction value) {
            return il2cpp::box_value<app::FloatFraction__Boxed>(get_class(), value);
        }
    } // namespace FloatFraction
} // namespace app::classes::types
