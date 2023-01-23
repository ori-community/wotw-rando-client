#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HideOnMenuOpen__Class.h>
#include <Modloader/app/structs/HideOnMenuOpen.h>

namespace app::classes::types {
    namespace HideOnMenuOpen {
        namespace {
            inline app::HideOnMenuOpen__Class* type_info_ref = nullptr;
        }
        inline app::HideOnMenuOpen__Class** type_info = &type_info_ref;
        inline app::HideOnMenuOpen__Class* get_class() {
            return il2cpp::get_class<app::HideOnMenuOpen__Class>(type_info, "", "HideOnMenuOpen");
        }
        inline app::HideOnMenuOpen* create() {
            return il2cpp::create_object<app::HideOnMenuOpen>(get_class());
        }
    } // namespace HideOnMenuOpen
} // namespace app::classes::types
