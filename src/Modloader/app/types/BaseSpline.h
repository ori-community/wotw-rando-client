#pragma once
#include <Modloader/app/structs/BaseSpline.h>
#include <Modloader/app/structs/BaseSpline__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseSpline {
        inline app::BaseSpline__Class** type_info() {
            static app::BaseSpline__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BaseSpline__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BaseSpline__Class* get_class() {
            return il2cpp::get_class<app::BaseSpline__Class>(type_info(), "", "BaseSpline");
        }
        inline app::BaseSpline* create() {
            return il2cpp::create_object<app::BaseSpline>(get_class());
        }
    } // namespace BaseSpline
} // namespace app::classes::types
