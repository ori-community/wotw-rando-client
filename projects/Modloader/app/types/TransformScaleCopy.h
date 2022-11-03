#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransformScaleCopy {
        namespace {
            inline app::TransformScaleCopy__Class* type_info_ref = nullptr;
        }
        inline app::TransformScaleCopy__Class** type_info = &type_info_ref;
        inline app::TransformScaleCopy__Class* get_class() {
            return il2cpp::get_class<app::TransformScaleCopy__Class>(type_info, "", "TransformScaleCopy");
        }
        inline app::TransformScaleCopy* create() {
            return il2cpp::create_object<app::TransformScaleCopy>(get_class());
        }
    } // namespace TransformScaleCopy
} // namespace app::classes::types
