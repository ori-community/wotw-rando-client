#pragma once
#include <Modloader/app/structs/AkCurveInterpolation__Enum.h>
#include <Modloader/app/structs/AkCurveInterpolation__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkCurveInterpolation__Enum {
        inline app::AkCurveInterpolation__Enum__Class** type_info() {
            static app::AkCurveInterpolation__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkCurveInterpolation__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkCurveInterpolation__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkCurveInterpolation__Enum__Class>(type_info(), "", "AkCurveInterpolation");
        }
        inline app::AkCurveInterpolation__Enum* create() {
            return il2cpp::create_object<app::AkCurveInterpolation__Enum>(get_class());
        }
    } // namespace AkCurveInterpolation__Enum
} // namespace app::classes::types
