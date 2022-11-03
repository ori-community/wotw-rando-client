#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Archive {
        namespace {
            inline app::Archive__Class* type_info_ref = nullptr;
        }
        inline app::Archive__Class** type_info = &type_info_ref;
        inline app::Archive__Class* get_class() {
            return il2cpp::get_class<app::Archive__Class>(type_info, "", "Archive");
        }
        inline app::Archive* create() {
            return il2cpp::create_object<app::Archive>(get_class());
        }
    } // namespace Archive
} // namespace app::classes::types
