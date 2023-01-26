#pragma once
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/Archive__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Archive {
        inline app::Archive__Class** type_info() {
            static app::Archive__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Archive__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Archive__Class* get_class() {
            return il2cpp::get_class<app::Archive__Class>(type_info(), "", "Archive");
        }
        inline app::Archive* create() {
            return il2cpp::create_object<app::Archive>(get_class());
        }
    } // namespace Archive
} // namespace app::classes::types
