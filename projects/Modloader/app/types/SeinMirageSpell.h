#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinMirageSpell__Class.h>
#include <Modloader/app/structs/SeinMirageSpell.h>

namespace app::classes::types {
    namespace SeinMirageSpell {
        namespace {
            inline app::SeinMirageSpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinMirageSpell__Class** type_info = &type_info_ref;
        inline app::SeinMirageSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinMirageSpell__Class>(type_info, "", "SeinMirageSpell");
        }
        inline app::SeinMirageSpell* create() {
            return il2cpp::create_object<app::SeinMirageSpell>(get_class());
        }
    } // namespace SeinMirageSpell
} // namespace app::classes::types
