#pragma once
#include <Modloader/app/structs/Reflector.h>
#include <Modloader/app/structs/Reflector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Reflector {
        inline app::Reflector__Class** type_info() {
            static app::Reflector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Reflector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Reflector__Class* get_class() {
            return il2cpp::get_class<app::Reflector__Class>(type_info(), "", "Reflector");
        }
        inline app::Reflector* create() {
            return il2cpp::create_object<app::Reflector>(get_class());
        }
    } // namespace Reflector
} // namespace app::classes::types
