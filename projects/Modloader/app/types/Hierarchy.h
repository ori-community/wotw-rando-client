#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Hierarchy {
        namespace {
            inline app::Hierarchy__Class* type_info_ref = nullptr;
        }
        inline app::Hierarchy__Class** type_info = &type_info_ref;
        inline app::Hierarchy__Class* get_class() {
            return il2cpp::get_class<app::Hierarchy__Class>(type_info, "RootMotion", "Hierarchy");
        }
        inline app::Hierarchy* create() {
            return il2cpp::create_object<app::Hierarchy>(get_class());
        }
    } // namespace Hierarchy
} // namespace app::classes::types
