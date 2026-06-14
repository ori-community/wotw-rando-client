#pragma once
#include <Modloader/app/structs/Vibrance.h>
#include <Modloader/app/structs/Vibrance__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Vibrance {
        inline app::Vibrance__Class** type_info() {
            static app::Vibrance__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Vibrance__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Vibrance__Class* get_class() {
            return il2cpp::get_class<app::Vibrance__Class>(type_info(), "Colorful", "Vibrance");
        }
        inline app::Vibrance* create() {
            return il2cpp::create_object<app::Vibrance>(get_class());
        }
    } // namespace Vibrance
} // namespace app::classes::types
