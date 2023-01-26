#pragma once
#include <Modloader/app/structs/Stomper.h>
#include <Modloader/app/structs/Stomper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Stomper {
        inline app::Stomper__Class** type_info() {
            static app::Stomper__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Stomper__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Stomper__Class* get_class() {
            return il2cpp::get_class<app::Stomper__Class>(type_info(), "", "Stomper");
        }
        inline app::Stomper* create() {
            return il2cpp::create_object<app::Stomper>(get_class());
        }
    } // namespace Stomper
} // namespace app::classes::types
