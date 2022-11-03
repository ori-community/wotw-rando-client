#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RadialBlur {
        namespace {
            inline app::RadialBlur__Class* type_info_ref = nullptr;
        }
        inline app::RadialBlur__Class** type_info = &type_info_ref;
        inline app::RadialBlur__Class* get_class() {
            return il2cpp::get_class<app::RadialBlur__Class>(type_info, "Colorful", "RadialBlur");
        }
        inline app::RadialBlur* create() {
            return il2cpp::create_object<app::RadialBlur>(get_class());
        }
    } // namespace RadialBlur
} // namespace app::classes::types
