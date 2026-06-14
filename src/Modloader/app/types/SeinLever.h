#pragma once
#include <Modloader/app/structs/SeinLever.h>
#include <Modloader/app/structs/SeinLever__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinLever {
        inline app::SeinLever__Class** type_info() {
            static app::SeinLever__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinLever__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinLever__Class* get_class() {
            return il2cpp::get_class<app::SeinLever__Class>(type_info(), "", "SeinLever");
        }
        inline app::SeinLever* create() {
            return il2cpp::create_object<app::SeinLever>(get_class());
        }
    } // namespace SeinLever
} // namespace app::classes::types
