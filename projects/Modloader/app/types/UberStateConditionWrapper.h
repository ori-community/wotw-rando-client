#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateConditionWrapper {
        namespace {
            inline app::UberStateConditionWrapper__Class* type_info_ref = nullptr;
        }
        inline app::UberStateConditionWrapper__Class** type_info = &type_info_ref;
        inline app::UberStateConditionWrapper__Class* get_class() {
            return il2cpp::get_class<app::UberStateConditionWrapper__Class>(type_info, "", "UberStateConditionWrapper");
        }
        inline app::UberStateConditionWrapper* create() {
            return il2cpp::create_object<app::UberStateConditionWrapper>(get_class());
        }
    } // namespace UberStateConditionWrapper
} // namespace app::classes::types
