#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataSetClearEventhandler {
        namespace {
            inline app::DataSetClearEventhandler__Class* type_info_ref = nullptr;
        }
        inline app::DataSetClearEventhandler__Class** type_info = &type_info_ref;
        inline app::DataSetClearEventhandler__Class* get_class() {
            return il2cpp::get_class<app::DataSetClearEventhandler__Class>(type_info, "System.Data", "DataSetClearEventhandler");
        }
        inline app::DataSetClearEventhandler* create() {
            return il2cpp::create_object<app::DataSetClearEventhandler>(get_class());
        }
    } // namespace DataSetClearEventhandler
} // namespace app::classes::types
