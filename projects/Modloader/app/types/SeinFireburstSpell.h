#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinFireburstSpell__Class.h>
#include <Modloader/app/structs/SeinFireburstSpell.h>

namespace app::classes::types {
    namespace SeinFireburstSpell {
        namespace {
            inline app::SeinFireburstSpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinFireburstSpell__Class** type_info = &type_info_ref;
        inline app::SeinFireburstSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinFireburstSpell__Class>(type_info, "", "SeinFireburstSpell");
        }
        inline app::SeinFireburstSpell* create() {
            return il2cpp::create_object<app::SeinFireburstSpell>(get_class());
        }
    } // namespace SeinFireburstSpell
} // namespace app::classes::types
