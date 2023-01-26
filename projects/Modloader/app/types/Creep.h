#pragma once
#include <Modloader/app/structs/Creep.h>
#include <Modloader/app/structs/Creep__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Creep {
        inline app::Creep__Class** type_info() {
            static app::Creep__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Creep__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Creep__Class* get_class() {
            return il2cpp::get_class<app::Creep__Class>(type_info(), "", "Creep");
        }
        inline app::Creep* create() {
            return il2cpp::create_object<app::Creep>(get_class());
        }
    } // namespace Creep
} // namespace app::classes::types
