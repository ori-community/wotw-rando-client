#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ArriveBehaviour {
        namespace {
            inline app::ArriveBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::ArriveBehaviour__Class** type_info = &type_info_ref;
        inline app::ArriveBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ArriveBehaviour__Class>(type_info, "Moon", "ArriveBehaviour");
        }
        inline app::ArriveBehaviour* create() {
            return il2cpp::create_object<app::ArriveBehaviour>(get_class());
        }
    } // namespace ArriveBehaviour
} // namespace app::classes::types
