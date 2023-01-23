#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EnvrionmentBasedSoundProvider__Class.h>
#include <Modloader/app/structs/EnvrionmentBasedSoundProvider.h>

namespace app::classes::types {
    namespace EnvrionmentBasedSoundProvider {
        namespace {
            inline app::EnvrionmentBasedSoundProvider__Class* type_info_ref = nullptr;
        }
        inline app::EnvrionmentBasedSoundProvider__Class** type_info = &type_info_ref;
        inline app::EnvrionmentBasedSoundProvider__Class* get_class() {
            return il2cpp::get_class<app::EnvrionmentBasedSoundProvider__Class>(type_info, "", "EnvrionmentBasedSoundProvider");
        }
        inline app::EnvrionmentBasedSoundProvider* create() {
            return il2cpp::create_object<app::EnvrionmentBasedSoundProvider>(get_class());
        }
    } // namespace EnvrionmentBasedSoundProvider
} // namespace app::classes::types
