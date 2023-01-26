#pragma once
#include <Modloader/app/structs/DirectionalBlur.h>
#include <Modloader/app/structs/DirectionalBlur__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DirectionalBlur {
        inline app::DirectionalBlur__Class** type_info() {
            static app::DirectionalBlur__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DirectionalBlur__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DirectionalBlur__Class* get_class() {
            return il2cpp::get_class<app::DirectionalBlur__Class>(type_info(), "Colorful", "DirectionalBlur");
        }
        inline app::DirectionalBlur* create() {
            return il2cpp::create_object<app::DirectionalBlur>(get_class());
        }
    } // namespace DirectionalBlur
} // namespace app::classes::types
