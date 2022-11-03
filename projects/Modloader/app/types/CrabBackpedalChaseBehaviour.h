#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CrabBackpedalChaseBehaviour {
        namespace {
            inline app::CrabBackpedalChaseBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::CrabBackpedalChaseBehaviour__Class** type_info = &type_info_ref;
        inline app::CrabBackpedalChaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::CrabBackpedalChaseBehaviour__Class>(type_info, "Moon", "CrabBackpedalChaseBehaviour");
        }
        inline app::CrabBackpedalChaseBehaviour* create() {
            return il2cpp::create_object<app::CrabBackpedalChaseBehaviour>(get_class());
        }
    } // namespace CrabBackpedalChaseBehaviour
} // namespace app::classes::types
