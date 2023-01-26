#pragma once
#include <Modloader/app/structs/AlphaMaskModifier.h>
#include <Modloader/app/structs/AlphaMaskModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AlphaMaskModifier {
        inline app::AlphaMaskModifier__Class** type_info() {
            static app::AlphaMaskModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AlphaMaskModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AlphaMaskModifier__Class* get_class() {
            return il2cpp::get_class<app::AlphaMaskModifier__Class>(type_info(), "", "AlphaMaskModifier");
        }
        inline app::AlphaMaskModifier* create() {
            return il2cpp::create_object<app::AlphaMaskModifier>(get_class());
        }
    } // namespace AlphaMaskModifier
} // namespace app::classes::types
