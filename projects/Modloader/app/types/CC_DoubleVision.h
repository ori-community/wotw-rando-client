#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CC_DoubleVision {
        namespace {
            inline app::CC_DoubleVision__Class* type_info_ref = nullptr;
        }
        inline app::CC_DoubleVision__Class** type_info = &type_info_ref;
        inline app::CC_DoubleVision__Class* get_class() {
            return il2cpp::get_class<app::CC_DoubleVision__Class>(type_info, "", "CC_DoubleVision");
        }
        inline app::CC_DoubleVision* create() {
            return il2cpp::create_object<app::CC_DoubleVision>(get_class());
        }
    } // namespace CC_DoubleVision
} // namespace app::classes::types
