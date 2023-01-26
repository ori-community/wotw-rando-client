#pragma once
#include <Modloader/app/structs/FileSet__Array.h>
#include <Modloader/app/structs/FileSet__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FileSet__Array {
        inline app::FileSet__Array__Class** type_info() {
            static app::FileSet__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FileSet__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FileSet__Array__Class* get_class() {
            return il2cpp::get_class<app::FileSet__Array__Class>(type_info(), "PlayFab.PlayStreamModels", "FileSet[]");
        }
        inline app::FileSet__Array* create() {
            return il2cpp::create_object<app::FileSet__Array>(get_class());
        }
    } // namespace FileSet__Array
} // namespace app::classes::types
