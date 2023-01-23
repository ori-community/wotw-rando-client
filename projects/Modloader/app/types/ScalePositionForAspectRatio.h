#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScalePositionForAspectRatio__Class.h>
#include <Modloader/app/structs/ScalePositionForAspectRatio.h>

namespace app::classes::types {
    namespace ScalePositionForAspectRatio {
        namespace {
            inline app::ScalePositionForAspectRatio__Class* type_info_ref = nullptr;
        }
        inline app::ScalePositionForAspectRatio__Class** type_info = &type_info_ref;
        inline app::ScalePositionForAspectRatio__Class* get_class() {
            return il2cpp::get_class<app::ScalePositionForAspectRatio__Class>(type_info, "", "ScalePositionForAspectRatio");
        }
        inline app::ScalePositionForAspectRatio* create() {
            return il2cpp::create_object<app::ScalePositionForAspectRatio>(get_class());
        }
    } // namespace ScalePositionForAspectRatio
} // namespace app::classes::types
