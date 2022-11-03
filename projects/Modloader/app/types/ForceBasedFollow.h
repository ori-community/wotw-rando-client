#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ForceBasedFollow {
        namespace {
            inline app::ForceBasedFollow__Class* type_info_ref = nullptr;
        }
        inline app::ForceBasedFollow__Class** type_info = &type_info_ref;
        inline app::ForceBasedFollow__Class* get_class() {
            return il2cpp::get_class<app::ForceBasedFollow__Class>(type_info, "", "ForceBasedFollow");
        }
        inline app::ForceBasedFollow* create() {
            return il2cpp::create_object<app::ForceBasedFollow>(get_class());
        }
    } // namespace ForceBasedFollow
} // namespace app::classes::types
