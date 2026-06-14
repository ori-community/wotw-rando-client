#pragma once
#include <Modloader/app/structs/ColosseumDisplay.h>
#include <Modloader/app/structs/ColosseumDisplay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColosseumDisplay {
        inline app::ColosseumDisplay__Class** type_info() {
            static app::ColosseumDisplay__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColosseumDisplay__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColosseumDisplay__Class* get_class() {
            return il2cpp::get_class<app::ColosseumDisplay__Class>(type_info(), "", "ColosseumDisplay");
        }
        inline app::ColosseumDisplay* create() {
            return il2cpp::create_object<app::ColosseumDisplay>(get_class());
        }
    } // namespace ColosseumDisplay
} // namespace app::classes::types
