#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BaseType__Class.h>
#include <Modloader/app/structs/BaseType.h>

namespace app::classes::types {
    namespace BaseType {
        namespace {
            inline app::BaseType__Class* type_info_ref = nullptr;
        }
        inline app::BaseType__Class** type_info = &type_info_ref;
        inline app::BaseType__Class* get_class() {
            return il2cpp::get_class<app::BaseType__Class>(type_info, "AK.Wwise", "BaseType");
        }
        inline app::BaseType* create() {
            return il2cpp::create_object<app::BaseType>(get_class());
        }
    } // namespace BaseType
} // namespace app::classes::types
