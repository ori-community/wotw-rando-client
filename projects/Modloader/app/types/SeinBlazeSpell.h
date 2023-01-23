#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinBlazeSpell__Class.h>
#include <Modloader/app/structs/SeinBlazeSpell.h>

namespace app::classes::types {
    namespace SeinBlazeSpell {
        namespace {
            inline app::SeinBlazeSpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinBlazeSpell__Class** type_info = &type_info_ref;
        inline app::SeinBlazeSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinBlazeSpell__Class>(type_info, "", "SeinBlazeSpell");
        }
        inline app::SeinBlazeSpell* create() {
            return il2cpp::create_object<app::SeinBlazeSpell>(get_class());
        }
    } // namespace SeinBlazeSpell
} // namespace app::classes::types
