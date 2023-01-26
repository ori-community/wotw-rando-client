#pragma once
#include <Modloader/app/structs/DistortExtraModifier.h>
#include <Modloader/app/structs/DistortExtraModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DistortExtraModifier {
        inline app::DistortExtraModifier__Class** type_info() {
            static app::DistortExtraModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DistortExtraModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DistortExtraModifier__Class* get_class() {
            return il2cpp::get_class<app::DistortExtraModifier__Class>(type_info(), "", "DistortExtraModifier");
        }
        inline app::DistortExtraModifier* create() {
            return il2cpp::create_object<app::DistortExtraModifier>(get_class());
        }
    } // namespace DistortExtraModifier
} // namespace app::classes::types
