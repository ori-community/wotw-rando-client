#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IFrameCaptureAgent__Array {
        namespace {
            app::IFrameCaptureAgent__Array__Class* type_info_ref = nullptr;
        }
        app::IFrameCaptureAgent__Array__Class** type_info = &type_info_ref;
        inline app::IFrameCaptureAgent__Array__Class* get_class() {
            return il2cpp::get_class<app::IFrameCaptureAgent__Array__Class>(type_info, "", "IFrameCaptureAgent[]");
        }
        inline app::IFrameCaptureAgent__Array* create() {
            return il2cpp::create_object<app::IFrameCaptureAgent__Array>(get_class());
        }
    } // namespace IFrameCaptureAgent__Array
} // namespace app::classes::types
