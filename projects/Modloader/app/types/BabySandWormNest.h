#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BabySandWormNest {
        namespace {
            inline app::BabySandWormNest__Class* type_info_ref = nullptr;
        }
        inline app::BabySandWormNest__Class** type_info = &type_info_ref;
        inline app::BabySandWormNest__Class* get_class() {
            return il2cpp::get_class<app::BabySandWormNest__Class>(type_info, "", "BabySandWormNest");
        }
        inline app::BabySandWormNest* create() {
            return il2cpp::create_object<app::BabySandWormNest>(get_class());
        }
    } // namespace BabySandWormNest
} // namespace app::classes::types
