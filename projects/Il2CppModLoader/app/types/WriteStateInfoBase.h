#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WriteStateInfoBase {
        namespace {
            inline app::WriteStateInfoBase__Class* type_info_ref = nullptr;
        }
        inline app::WriteStateInfoBase__Class** type_info = &type_info_ref;
        inline app::WriteStateInfoBase__Class* get_class() {
            return il2cpp::get_class<app::WriteStateInfoBase__Class>(type_info, "System.Net.Mime", "WriteStateInfoBase");
        }
        inline app::WriteStateInfoBase* create() {
            return il2cpp::create_object<app::WriteStateInfoBase>(get_class());
        }
    } // namespace WriteStateInfoBase
} // namespace app::classes::types
