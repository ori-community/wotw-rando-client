#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Spear__Class.h>
#include <Modloader/app/structs/Spear.h>

namespace app::classes::types {
    namespace Spear {
        namespace {
            inline app::Spear__Class* type_info_ref = nullptr;
        }
        inline app::Spear__Class** type_info = &type_info_ref;
        inline app::Spear__Class* get_class() {
            return il2cpp::get_class<app::Spear__Class>(type_info, "", "Spear");
        }
        inline app::Spear* create() {
            return il2cpp::create_object<app::Spear>(get_class());
        }
    } // namespace Spear
} // namespace app::classes::types
