#pragma once
#include <Modloader/app/structs/RefractionModifier.h>
#include <Modloader/app/structs/RefractionModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RefractionModifier {
        inline app::RefractionModifier__Class** type_info() {
            static app::RefractionModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RefractionModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RefractionModifier__Class* get_class() {
            return il2cpp::get_class<app::RefractionModifier__Class>(type_info(), "", "RefractionModifier");
        }
        inline app::RefractionModifier* create() {
            return il2cpp::create_object<app::RefractionModifier>(get_class());
        }
    } // namespace RefractionModifier
} // namespace app::classes::types
