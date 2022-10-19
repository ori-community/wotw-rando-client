#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
