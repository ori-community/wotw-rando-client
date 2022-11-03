#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Wiggle {
        namespace {
            inline app::Wiggle__Class* type_info_ref = nullptr;
        }
        inline app::Wiggle__Class** type_info = &type_info_ref;
        inline app::Wiggle__Class* get_class() {
            return il2cpp::get_class<app::Wiggle__Class>(type_info, "Colorful", "Wiggle");
        }
        inline app::Wiggle* create() {
            return il2cpp::create_object<app::Wiggle>(get_class());
        }
    } // namespace Wiggle
} // namespace app::classes::types
