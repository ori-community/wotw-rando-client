#pragma once
#include <Modloader/app/structs/SeinFootsteps.h>
#include <Modloader/app/structs/SeinFootsteps__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinFootsteps {
        inline app::SeinFootsteps__Class** type_info() {
            static app::SeinFootsteps__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinFootsteps__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinFootsteps__Class* get_class() {
            return il2cpp::get_class<app::SeinFootsteps__Class>(type_info(), "", "SeinFootsteps");
        }
        inline app::SeinFootsteps* create() {
            return il2cpp::create_object<app::SeinFootsteps>(get_class());
        }
    } // namespace SeinFootsteps
} // namespace app::classes::types
