#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WandererMoveBehaviour {
        namespace {
            inline app::WandererMoveBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::WandererMoveBehaviour__Class** type_info = &type_info_ref;
        inline app::WandererMoveBehaviour__Class* get_class() {
            return il2cpp::get_class<app::WandererMoveBehaviour__Class>(type_info, "", "WandererMoveBehaviour");
        }
        inline app::WandererMoveBehaviour* create() {
            return il2cpp::create_object<app::WandererMoveBehaviour>(get_class());
        }
    } // namespace WandererMoveBehaviour
} // namespace app::classes::types
