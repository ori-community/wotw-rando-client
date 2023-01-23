#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Directory_SearchData__Array__Class.h>
#include <Modloader/app/structs/Directory_SearchData__Array.h>

namespace app::classes::types {
    namespace Directory_SearchData__Array {
        namespace {
            inline app::Directory_SearchData__Array__Class* type_info_ref = nullptr;
        }
        inline app::Directory_SearchData__Array__Class** type_info = &type_info_ref;
        inline app::Directory_SearchData__Array__Class* get_class() {
            return il2cpp::get_class<app::Directory_SearchData__Array__Class>(type_info, "System.IO", "Directory+SearchData[]");
        }
        inline app::Directory_SearchData__Array* create() {
            return il2cpp::create_object<app::Directory_SearchData__Array>(get_class());
        }
    } // namespace Directory_SearchData__Array
} // namespace app::classes::types
