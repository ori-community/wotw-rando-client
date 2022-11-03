#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BaseGroupType {
        namespace {
            inline app::BaseGroupType__Class* type_info_ref = nullptr;
        }
        inline app::BaseGroupType__Class** type_info = &type_info_ref;
        inline app::BaseGroupType__Class* get_class() {
            return il2cpp::get_class<app::BaseGroupType__Class>(type_info, "AK.Wwise", "BaseGroupType");
        }
        inline app::BaseGroupType* create() {
            return il2cpp::create_object<app::BaseGroupType>(get_class());
        }
    } // namespace BaseGroupType
} // namespace app::classes::types
