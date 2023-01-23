#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpellUISeeds__Class.h>
#include <Modloader/app/structs/SpellUISeeds.h>

namespace app::classes::types {
    namespace SpellUISeeds {
        namespace {
            inline app::SpellUISeeds__Class* type_info_ref = nullptr;
        }
        inline app::SpellUISeeds__Class** type_info = &type_info_ref;
        inline app::SpellUISeeds__Class* get_class() {
            return il2cpp::get_class<app::SpellUISeeds__Class>(type_info, "", "SpellUISeeds");
        }
        inline app::SpellUISeeds* create() {
            return il2cpp::create_object<app::SpellUISeeds>(get_class());
        }
    } // namespace SpellUISeeds
} // namespace app::classes::types
