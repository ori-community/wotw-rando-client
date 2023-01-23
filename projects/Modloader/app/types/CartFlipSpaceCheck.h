#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CartFlipSpaceCheck__Class.h>
#include <Modloader/app/structs/CartFlipSpaceCheck.h>

namespace app::classes::types {
    namespace CartFlipSpaceCheck {
        namespace {
            inline app::CartFlipSpaceCheck__Class* type_info_ref = nullptr;
        }
        inline app::CartFlipSpaceCheck__Class** type_info = &type_info_ref;
        inline app::CartFlipSpaceCheck__Class* get_class() {
            return il2cpp::get_class<app::CartFlipSpaceCheck__Class>(type_info, "", "CartFlipSpaceCheck");
        }
        inline app::CartFlipSpaceCheck* create() {
            return il2cpp::create_object<app::CartFlipSpaceCheck>(get_class());
        }
    } // namespace CartFlipSpaceCheck
} // namespace app::classes::types
