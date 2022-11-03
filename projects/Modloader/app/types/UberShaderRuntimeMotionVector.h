#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderRuntimeMotionVector {
        namespace {
            inline app::UberShaderRuntimeMotionVector__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderRuntimeMotionVector__Class** type_info = &type_info_ref;
        inline app::UberShaderRuntimeMotionVector__Class* get_class() {
            return il2cpp::get_class<app::UberShaderRuntimeMotionVector__Class>(type_info, "", "UberShaderRuntimeMotionVector");
        }
        inline app::UberShaderRuntimeMotionVector* create() {
            return il2cpp::create_object<app::UberShaderRuntimeMotionVector>(get_class());
        }
    } // namespace UberShaderRuntimeMotionVector
} // namespace app::classes::types
