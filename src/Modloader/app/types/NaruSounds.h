#pragma once
#include <Modloader/app/structs/NaruSounds.h>
#include <Modloader/app/structs/NaruSounds__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NaruSounds {
        inline app::NaruSounds__Class** type_info() {
            static app::NaruSounds__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NaruSounds__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NaruSounds__Class* get_class() {
            return il2cpp::get_class<app::NaruSounds__Class>(type_info(), "", "NaruSounds");
        }
        inline app::NaruSounds* create() {
            return il2cpp::create_object<app::NaruSounds>(get_class());
        }
    } // namespace NaruSounds
} // namespace app::classes::types
