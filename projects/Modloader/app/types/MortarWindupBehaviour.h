#pragma once
#include <Modloader/app/structs/MortarWindupBehaviour.h>
#include <Modloader/app/structs/MortarWindupBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MortarWindupBehaviour {
        inline app::MortarWindupBehaviour__Class** type_info() {
            static app::MortarWindupBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MortarWindupBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MortarWindupBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MortarWindupBehaviour__Class>(type_info(), "", "MortarWindupBehaviour");
        }
        inline app::MortarWindupBehaviour* create() {
            return il2cpp::create_object<app::MortarWindupBehaviour>(get_class());
        }
    } // namespace MortarWindupBehaviour
} // namespace app::classes::types
