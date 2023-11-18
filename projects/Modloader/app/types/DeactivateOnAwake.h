#pragma once
#include <Modloader/app/structs/DeactivateOnAwake.h>
#include <Modloader/app/structs/DeactivateOnAwake__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeactivateOnAwake {
        inline app::DeactivateOnAwake__Class** type_info() {
            static app::DeactivateOnAwake__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DeactivateOnAwake__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DeactivateOnAwake__Class* get_class() {
            return il2cpp::get_class<app::DeactivateOnAwake__Class>(type_info(), "", "DeactivateOnAwake");
        }
        inline app::DeactivateOnAwake* create() {
            return il2cpp::create_object<app::DeactivateOnAwake>(get_class());
        }
    } // namespace DeactivateOnAwake
} // namespace app::classes::types
