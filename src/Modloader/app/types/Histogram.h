#pragma once
#include <Modloader/app/structs/Histogram.h>
#include <Modloader/app/structs/Histogram__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Histogram {
        inline app::Histogram__Class** type_info() {
            static app::Histogram__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Histogram__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Histogram__Class* get_class() {
            return il2cpp::get_class<app::Histogram__Class>(type_info(), "Colorful", "Histogram");
        }
        inline app::Histogram* create() {
            return il2cpp::create_object<app::Histogram>(get_class());
        }
    } // namespace Histogram
} // namespace app::classes::types
