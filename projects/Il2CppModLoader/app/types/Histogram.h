#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Histogram {
        namespace {
            app::Histogram__Class* type_info_ref = nullptr;
        }
        app::Histogram__Class** type_info = &type_info_ref;
        inline app::Histogram__Class* get_class() {
            return il2cpp::get_class<app::Histogram__Class>(type_info, "Colorful", "Histogram");
        }
        inline app::Histogram* create() {
            return il2cpp::create_object<app::Histogram>(get_class());
        }
    } // namespace Histogram
} // namespace app::classes::types
