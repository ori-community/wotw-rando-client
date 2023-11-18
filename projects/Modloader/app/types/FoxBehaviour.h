#pragma once
#include <Modloader/app/structs/FoxBehaviour.h>
#include <Modloader/app/structs/FoxBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FoxBehaviour {
        inline app::FoxBehaviour__Class** type_info() {
            static app::FoxBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FoxBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FoxBehaviour__Class* get_class() {
            return il2cpp::get_class<app::FoxBehaviour__Class>(type_info(), "", "FoxBehaviour");
        }
        inline app::FoxBehaviour* create() {
            return il2cpp::create_object<app::FoxBehaviour>(get_class());
        }
    } // namespace FoxBehaviour
} // namespace app::classes::types
