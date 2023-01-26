#pragma once
#include <Modloader/app/structs/UberShaderRuntimeMotionVector.h>
#include <Modloader/app/structs/UberShaderRuntimeMotionVector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderRuntimeMotionVector {
        inline app::UberShaderRuntimeMotionVector__Class** type_info() {
            static app::UberShaderRuntimeMotionVector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderRuntimeMotionVector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderRuntimeMotionVector__Class* get_class() {
            return il2cpp::get_class<app::UberShaderRuntimeMotionVector__Class>(type_info(), "", "UberShaderRuntimeMotionVector");
        }
        inline app::UberShaderRuntimeMotionVector* create() {
            return il2cpp::create_object<app::UberShaderRuntimeMotionVector>(get_class());
        }
    } // namespace UberShaderRuntimeMotionVector
} // namespace app::classes::types
