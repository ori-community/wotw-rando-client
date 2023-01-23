#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CC_HueSaturationValue__Class.h>
#include <Modloader/app/structs/CC_HueSaturationValue.h>

namespace app::classes::types {
    namespace CC_HueSaturationValue {
        namespace {
            inline app::CC_HueSaturationValue__Class* type_info_ref = nullptr;
        }
        inline app::CC_HueSaturationValue__Class** type_info = &type_info_ref;
        inline app::CC_HueSaturationValue__Class* get_class() {
            return il2cpp::get_class<app::CC_HueSaturationValue__Class>(type_info, "", "CC_HueSaturationValue");
        }
        inline app::CC_HueSaturationValue* create() {
            return il2cpp::create_object<app::CC_HueSaturationValue>(get_class());
        }
    } // namespace CC_HueSaturationValue
} // namespace app::classes::types
