#pragma once
#include <Modloader/app/structs/SplineUtil.h>
#include <Modloader/app/structs/SplineUtil__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SplineUtil {
        inline app::SplineUtil__Class** type_info() {
            static app::SplineUtil__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SplineUtil__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SplineUtil__Class* get_class() {
            return il2cpp::get_class<app::SplineUtil__Class>(type_info(), "", "SplineUtil");
        }
        inline app::SplineUtil* create() {
            return il2cpp::create_object<app::SplineUtil>(get_class());
        }
    } // namespace SplineUtil
} // namespace app::classes::types
