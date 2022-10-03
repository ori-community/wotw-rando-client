#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FileSet {
        namespace {
            app::FileSet__Class* type_info_ref = nullptr;
        }
        app::FileSet__Class** type_info = &type_info_ref;
        inline app::FileSet__Class* get_class() {
            return il2cpp::get_class<app::FileSet__Class>(type_info, "PlayFab.PlayStreamModels", "FileSet");
        }
        inline app::FileSet* create() {
            return il2cpp::create_object<app::FileSet>(get_class());
        }
        inline app::FileSet__Array* create_array(int size) {
            return il2cpp::array_new<app::FileSet__Array>(get_class(), size);
        }
    } // namespace FileSet
} // namespace app::classes::types
