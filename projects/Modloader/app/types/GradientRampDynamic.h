#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GradientRampDynamic__Class.h>
#include <Modloader/app/structs/GradientRampDynamic.h>

namespace app::classes::types {
    namespace GradientRampDynamic {
        namespace {
            inline app::GradientRampDynamic__Class* type_info_ref = nullptr;
        }
        inline app::GradientRampDynamic__Class** type_info = &type_info_ref;
        inline app::GradientRampDynamic__Class* get_class() {
            return il2cpp::get_class<app::GradientRampDynamic__Class>(type_info, "Colorful", "GradientRampDynamic");
        }
        inline app::GradientRampDynamic* create() {
            return il2cpp::create_object<app::GradientRampDynamic>(get_class());
        }
    } // namespace GradientRampDynamic
} // namespace app::classes::types
