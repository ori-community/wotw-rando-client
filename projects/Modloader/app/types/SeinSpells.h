#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinSpells {
        namespace {
            inline app::SeinSpells__Class* type_info_ref = nullptr;
        }
        inline app::SeinSpells__Class** type_info = &type_info_ref;
        inline app::SeinSpells__Class* get_class() {
            return il2cpp::get_class<app::SeinSpells__Class>(type_info, "", "SeinSpells");
        }
        inline app::SeinSpells* create() {
            return il2cpp::create_object<app::SeinSpells>(get_class());
        }
    } // namespace SeinSpells
} // namespace app::classes::types
