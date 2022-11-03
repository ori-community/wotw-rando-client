#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Comments {
        namespace {
            inline app::Comments__Class* type_info_ref = nullptr;
        }
        inline app::Comments__Class** type_info = &type_info_ref;
        inline app::Comments__Class* get_class() {
            return il2cpp::get_class<app::Comments__Class>(type_info, "RootMotion", "Comments");
        }
        inline app::Comments* create() {
            return il2cpp::create_object<app::Comments>(get_class());
        }
    } // namespace Comments
} // namespace app::classes::types
