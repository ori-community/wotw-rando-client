#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WriteStateInfoBase {
        namespace {
            app::WriteStateInfoBase__Class* type_info_ref = nullptr;
        }
        app::WriteStateInfoBase__Class** type_info = &type_info_ref;
        inline app::WriteStateInfoBase__Class* get_class() {
            return il2cpp::get_class<app::WriteStateInfoBase__Class>(type_info, "System.Net.Mime", "WriteStateInfoBase");
        }
        inline app::WriteStateInfoBase* create() {
            return il2cpp::create_object<app::WriteStateInfoBase>(get_class());
        }
    } // namespace WriteStateInfoBase
} // namespace app::classes::types
