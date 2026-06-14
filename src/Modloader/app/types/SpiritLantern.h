#pragma once
#include <Modloader/app/structs/SpiritLantern.h>
#include <Modloader/app/structs/SpiritLantern__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritLantern {
        inline app::SpiritLantern__Class** type_info() {
            static app::SpiritLantern__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritLantern__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritLantern__Class* get_class() {
            return il2cpp::get_class<app::SpiritLantern__Class>(type_info(), "", "SpiritLantern");
        }
        inline app::SpiritLantern* create() {
            return il2cpp::create_object<app::SpiritLantern>(get_class());
        }
    } // namespace SpiritLantern
} // namespace app::classes::types
