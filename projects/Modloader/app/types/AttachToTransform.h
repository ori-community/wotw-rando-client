#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AttachToTransform__Class.h>
#include <Modloader/app/structs/AttachToTransform.h>

namespace app::classes::types {
    namespace AttachToTransform {
        namespace {
            inline app::AttachToTransform__Class* type_info_ref = nullptr;
        }
        inline app::AttachToTransform__Class** type_info = &type_info_ref;
        inline app::AttachToTransform__Class* get_class() {
            return il2cpp::get_class<app::AttachToTransform__Class>(type_info, "", "AttachToTransform");
        }
        inline app::AttachToTransform* create() {
            return il2cpp::create_object<app::AttachToTransform>(get_class());
        }
    } // namespace AttachToTransform
} // namespace app::classes::types
