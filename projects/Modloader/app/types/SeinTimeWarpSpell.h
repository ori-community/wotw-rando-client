#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinTimeWarpSpell__Class.h>
#include <Modloader/app/structs/SeinTimeWarpSpell.h>

namespace app::classes::types {
    namespace SeinTimeWarpSpell {
        namespace {
            inline app::SeinTimeWarpSpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinTimeWarpSpell__Class** type_info = &type_info_ref;
        inline app::SeinTimeWarpSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinTimeWarpSpell__Class>(type_info, "", "SeinTimeWarpSpell");
        }
        inline app::SeinTimeWarpSpell* create() {
            return il2cpp::create_object<app::SeinTimeWarpSpell>(get_class());
        }
    } // namespace SeinTimeWarpSpell
} // namespace app::classes::types
