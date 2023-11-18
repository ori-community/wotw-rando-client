#pragma once
#include <Modloader/app/structs/Kuwahara.h>
#include <Modloader/app/structs/Kuwahara__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Kuwahara {
        inline app::Kuwahara__Class** type_info() {
            static app::Kuwahara__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Kuwahara__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Kuwahara__Class* get_class() {
            return il2cpp::get_class<app::Kuwahara__Class>(type_info(), "Colorful", "Kuwahara");
        }
        inline app::Kuwahara* create() {
            return il2cpp::create_object<app::Kuwahara>(get_class());
        }
    } // namespace Kuwahara
} // namespace app::classes::types
