#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinChakramSpell__Class.h>
#include <Modloader/app/structs/SeinChakramSpell.h>

namespace app::classes::types {
    namespace SeinChakramSpell {
        namespace {
            inline app::SeinChakramSpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinChakramSpell__Class** type_info = &type_info_ref;
        inline app::SeinChakramSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinChakramSpell__Class>(type_info, "", "SeinChakramSpell");
        }
        inline app::SeinChakramSpell* create() {
            return il2cpp::create_object<app::SeinChakramSpell>(get_class());
        }
    } // namespace SeinChakramSpell
} // namespace app::classes::types
