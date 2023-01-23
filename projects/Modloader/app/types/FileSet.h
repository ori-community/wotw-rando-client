#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FileSet__Class.h>
#include <Modloader/app/structs/FileSet.h>
#include <Modloader/app/structs/FileSet__Array.h>

namespace app::classes::types {
    namespace FileSet {
        namespace {
            inline app::FileSet__Class* type_info_ref = nullptr;
        }
        inline app::FileSet__Class** type_info = &type_info_ref;
        inline app::FileSet__Class* get_class() {
            return il2cpp::get_class<app::FileSet__Class>(type_info, "PlayFab.PlayStreamModels", "FileSet");
        }
        inline app::FileSet* create() {
            return il2cpp::create_object<app::FileSet>(get_class());
        }
        inline app::FileSet__Array* create_array(int size) {
            return il2cpp::array_new<app::FileSet__Array>(get_class(), size);
        }
        inline app::FileSet__Array* create_array(const std::vector<app::FileSet*>& items) {
            return il2cpp::array_new<app::FileSet__Array>(get_class(), items);
        }
    } // namespace FileSet
} // namespace app::classes::types
