#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StunnBehaviour {
        namespace {
            inline app::StunnBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::StunnBehaviour__Class** type_info = &type_info_ref;
        inline app::StunnBehaviour__Class* get_class() {
            return il2cpp::get_class<app::StunnBehaviour__Class>(type_info, "", "StunnBehaviour");
        }
        inline app::StunnBehaviour* create() {
            return il2cpp::create_object<app::StunnBehaviour>(get_class());
        }
    } // namespace StunnBehaviour
} // namespace app::classes::types
