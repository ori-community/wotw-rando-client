#pragma once
#include <Modloader/app/structs/Interp.h>
#include <Modloader/app/structs/Interp__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Interp {
        inline app::Interp__Class** type_info() {
            static app::Interp__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Interp__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Interp__Class* get_class() {
            return il2cpp::get_class<app::Interp__Class>(type_info(), "RootMotion", "Interp");
        }
        inline app::Interp* create() {
            return il2cpp::create_object<app::Interp>(get_class());
        }
    } // namespace Interp
} // namespace app::classes::types
