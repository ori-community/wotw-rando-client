#pragma once
#include <Modloader/app/structs/IFrameCaptureAgent__Array.h>
#include <Modloader/app/structs/IFrameCaptureAgent__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IFrameCaptureAgent__Array {
        inline app::IFrameCaptureAgent__Array__Class** type_info() {
            static app::IFrameCaptureAgent__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IFrameCaptureAgent__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IFrameCaptureAgent__Array__Class* get_class() {
            return il2cpp::get_class<app::IFrameCaptureAgent__Array__Class>(type_info(), "", "IFrameCaptureAgent[]");
        }
        inline app::IFrameCaptureAgent__Array* create() {
            return il2cpp::create_object<app::IFrameCaptureAgent__Array>(get_class());
        }
    } // namespace IFrameCaptureAgent__Array
} // namespace app::classes::types
