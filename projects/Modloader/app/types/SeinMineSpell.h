#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinMineSpell {
        namespace {
            inline app::SeinMineSpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinMineSpell__Class** type_info = &type_info_ref;
        inline app::SeinMineSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinMineSpell__Class>(type_info, "", "SeinMineSpell");
        }
        inline app::SeinMineSpell* create() {
            return il2cpp::create_object<app::SeinMineSpell>(get_class());
        }
    } // namespace SeinMineSpell
} // namespace app::classes::types
