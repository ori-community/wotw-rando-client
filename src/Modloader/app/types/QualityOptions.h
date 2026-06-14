#pragma once
#include <Modloader/app/structs/QualityOptions.h>
#include <Modloader/app/structs/QualityOptions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QualityOptions {
        inline app::QualityOptions__Class** type_info() {
            static app::QualityOptions__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QualityOptions__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QualityOptions__Class* get_class() {
            return il2cpp::get_class<app::QualityOptions__Class>(type_info(), "TriangleNet.Meshing", "QualityOptions");
        }
        inline app::QualityOptions* create() {
            return il2cpp::create_object<app::QualityOptions>(get_class());
        }
    } // namespace QualityOptions
} // namespace app::classes::types
