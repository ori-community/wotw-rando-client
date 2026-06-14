#pragma once
#include <Modloader/app/structs/DepthPrecullModifier.h>
#include <Modloader/app/structs/DepthPrecullModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DepthPrecullModifier {
        inline app::DepthPrecullModifier__Class** type_info() {
            static app::DepthPrecullModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DepthPrecullModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DepthPrecullModifier__Class* get_class() {
            return il2cpp::get_class<app::DepthPrecullModifier__Class>(type_info(), "", "DepthPrecullModifier");
        }
        inline app::DepthPrecullModifier* create() {
            return il2cpp::create_object<app::DepthPrecullModifier>(get_class());
        }
    } // namespace DepthPrecullModifier
} // namespace app::classes::types
