#pragma once
#include <Modloader/app/structs/SeinLaunch.h>
#include <Modloader/app/structs/SeinLaunch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinLaunch {
        inline app::SeinLaunch__Class** type_info() {
            static app::SeinLaunch__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinLaunch__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinLaunch__Class* get_class() {
            return il2cpp::get_class<app::SeinLaunch__Class>(type_info(), "", "SeinLaunch");
        }
        inline app::SeinLaunch* create() {
            return il2cpp::create_object<app::SeinLaunch>(get_class());
        }
    } // namespace SeinLaunch
} // namespace app::classes::types
