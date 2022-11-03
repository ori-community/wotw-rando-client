#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoulFlame {
        namespace {
            inline app::SoulFlame__Class* type_info_ref = nullptr;
        }
        inline app::SoulFlame__Class** type_info = &type_info_ref;
        inline app::SoulFlame__Class* get_class() {
            return il2cpp::get_class<app::SoulFlame__Class>(type_info, "", "SoulFlame");
        }
        inline app::SoulFlame* create() {
            return il2cpp::create_object<app::SoulFlame>(get_class());
        }
    } // namespace SoulFlame
} // namespace app::classes::types
