#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinWarpSpell__Class.h>
#include <Modloader/app/structs/SeinWarpSpell.h>

namespace app::classes::types {
    namespace SeinWarpSpell {
        namespace {
            inline app::SeinWarpSpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinWarpSpell__Class** type_info = &type_info_ref;
        inline app::SeinWarpSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinWarpSpell__Class>(type_info, "", "SeinWarpSpell");
        }
        inline app::SeinWarpSpell* create() {
            return il2cpp::create_object<app::SeinWarpSpell>(get_class());
        }
    } // namespace SeinWarpSpell
} // namespace app::classes::types
