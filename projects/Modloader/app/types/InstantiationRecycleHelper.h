#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InstantiationRecycleHelper {
        inline app::InstantiationRecycleHelper__Class** type_info = (app::InstantiationRecycleHelper__Class**)(modloader::win::memory::resolve_rva(0x0477E588));
        inline app::InstantiationRecycleHelper__Class* get_class() {
            return il2cpp::get_class<app::InstantiationRecycleHelper__Class>(type_info, "", "InstantiationRecycleHelper");
        }
        inline app::InstantiationRecycleHelper* create() {
            return il2cpp::create_object<app::InstantiationRecycleHelper>(get_class());
        }
    } // namespace InstantiationRecycleHelper
} // namespace app::classes::types
