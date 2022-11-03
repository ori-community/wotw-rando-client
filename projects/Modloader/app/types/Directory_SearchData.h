#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Directory_SearchData {
        inline app::Directory_SearchData__Class** type_info = (app::Directory_SearchData__Class**)(modloader::win::memory::resolve_rva(0x0477AE98));
        inline app::Directory_SearchData__Class* get_class() {
            return il2cpp::get_nested_class<app::Directory_SearchData__Class>(type_info, "System.IO", "Directory", "SearchData");
        }
        inline app::Directory_SearchData* create() {
            return il2cpp::create_object<app::Directory_SearchData>(get_class());
        }
        inline app::Directory_SearchData__Array* create_array(int size) {
            return il2cpp::array_new<app::Directory_SearchData__Array>(get_class(), size);
        }
        inline app::Directory_SearchData__Array* create_array(const std::vector<app::Directory_SearchData*>& items) {
            return il2cpp::array_new<app::Directory_SearchData__Array>(get_class(), items);
        }
    } // namespace Directory_SearchData
} // namespace app::classes::types
