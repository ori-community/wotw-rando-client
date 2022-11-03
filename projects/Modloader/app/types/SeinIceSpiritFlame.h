#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinIceSpiritFlame {
        namespace {
            inline app::SeinIceSpiritFlame__Class* type_info_ref = nullptr;
        }
        inline app::SeinIceSpiritFlame__Class** type_info = &type_info_ref;
        inline app::SeinIceSpiritFlame__Class* get_class() {
            return il2cpp::get_class<app::SeinIceSpiritFlame__Class>(type_info, "", "SeinIceSpiritFlame");
        }
        inline app::SeinIceSpiritFlame* create() {
            return il2cpp::create_object<app::SeinIceSpiritFlame>(get_class());
        }
    } // namespace SeinIceSpiritFlame
} // namespace app::classes::types
