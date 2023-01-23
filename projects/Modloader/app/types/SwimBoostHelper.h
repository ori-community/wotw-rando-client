#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SwimBoostHelper__Class.h>
#include <Modloader/app/structs/SwimBoostHelper.h>

namespace app::classes::types {
    namespace SwimBoostHelper {
        namespace {
            inline app::SwimBoostHelper__Class* type_info_ref = nullptr;
        }
        inline app::SwimBoostHelper__Class** type_info = &type_info_ref;
        inline app::SwimBoostHelper__Class* get_class() {
            return il2cpp::get_class<app::SwimBoostHelper__Class>(type_info, "", "SwimBoostHelper");
        }
        inline app::SwimBoostHelper* create() {
            return il2cpp::create_object<app::SwimBoostHelper>(get_class());
        }
    } // namespace SwimBoostHelper
} // namespace app::classes::types
