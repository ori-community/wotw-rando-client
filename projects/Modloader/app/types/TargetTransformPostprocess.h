#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TargetTransformPostprocess {
        namespace {
            inline app::TargetTransformPostprocess__Class* type_info_ref = nullptr;
        }
        inline app::TargetTransformPostprocess__Class** type_info = &type_info_ref;
        inline app::TargetTransformPostprocess__Class* get_class() {
            return il2cpp::get_class<app::TargetTransformPostprocess__Class>(type_info, "", "TargetTransformPostprocess");
        }
        inline app::TargetTransformPostprocess* create() {
            return il2cpp::create_object<app::TargetTransformPostprocess>(get_class());
        }
    } // namespace TargetTransformPostprocess
} // namespace app::classes::types
