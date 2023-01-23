#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HideWhenMainMenuOpen__Array__Class.h>
#include <Modloader/app/structs/HideWhenMainMenuOpen__Array.h>

namespace app::classes::types {
    namespace HideWhenMainMenuOpen__Array {
        namespace {
            inline app::HideWhenMainMenuOpen__Array__Class* type_info_ref = nullptr;
        }
        inline app::HideWhenMainMenuOpen__Array__Class** type_info = &type_info_ref;
        inline app::HideWhenMainMenuOpen__Array__Class* get_class() {
            return il2cpp::get_class<app::HideWhenMainMenuOpen__Array__Class>(type_info, "", "HideWhenMainMenuOpen[]");
        }
        inline app::HideWhenMainMenuOpen__Array* create() {
            return il2cpp::create_object<app::HideWhenMainMenuOpen__Array>(get_class());
        }
    } // namespace HideWhenMainMenuOpen__Array
} // namespace app::classes::types
