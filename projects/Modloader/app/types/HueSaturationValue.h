#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HueSaturationValue {
        namespace {
            inline app::HueSaturationValue__Class* type_info_ref = nullptr;
        }
        inline app::HueSaturationValue__Class** type_info = &type_info_ref;
        inline app::HueSaturationValue__Class* get_class() {
            return il2cpp::get_class<app::HueSaturationValue__Class>(type_info, "Colorful", "HueSaturationValue");
        }
        inline app::HueSaturationValue* create() {
            return il2cpp::create_object<app::HueSaturationValue>(get_class());
        }
    } // namespace HueSaturationValue
} // namespace app::classes::types
