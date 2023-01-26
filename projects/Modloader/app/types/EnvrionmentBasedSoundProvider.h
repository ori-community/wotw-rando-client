#pragma once
#include <Modloader/app/structs/EnvrionmentBasedSoundProvider.h>
#include <Modloader/app/structs/EnvrionmentBasedSoundProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnvrionmentBasedSoundProvider {
        inline app::EnvrionmentBasedSoundProvider__Class** type_info() {
            static app::EnvrionmentBasedSoundProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnvrionmentBasedSoundProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnvrionmentBasedSoundProvider__Class* get_class() {
            return il2cpp::get_class<app::EnvrionmentBasedSoundProvider__Class>(type_info(), "", "EnvrionmentBasedSoundProvider");
        }
        inline app::EnvrionmentBasedSoundProvider* create() {
            return il2cpp::create_object<app::EnvrionmentBasedSoundProvider>(get_class());
        }
    } // namespace EnvrionmentBasedSoundProvider
} // namespace app::classes::types
