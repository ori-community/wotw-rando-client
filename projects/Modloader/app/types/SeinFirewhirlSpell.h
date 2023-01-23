#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinFirewhirlSpell__Class.h>
#include <Modloader/app/structs/SeinFirewhirlSpell.h>

namespace app::classes::types {
    namespace SeinFirewhirlSpell {
        namespace {
            inline app::SeinFirewhirlSpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinFirewhirlSpell__Class** type_info = &type_info_ref;
        inline app::SeinFirewhirlSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinFirewhirlSpell__Class>(type_info, "", "SeinFirewhirlSpell");
        }
        inline app::SeinFirewhirlSpell* create() {
            return il2cpp::create_object<app::SeinFirewhirlSpell>(get_class());
        }
    } // namespace SeinFirewhirlSpell
} // namespace app::classes::types
