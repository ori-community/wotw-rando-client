#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinLocalSpeedAction__Class.h>
#include <Modloader/app/structs/SeinLocalSpeedAction.h>

namespace app::classes::types {
    namespace SeinLocalSpeedAction {
        namespace {
            inline app::SeinLocalSpeedAction__Class* type_info_ref = nullptr;
        }
        inline app::SeinLocalSpeedAction__Class** type_info = &type_info_ref;
        inline app::SeinLocalSpeedAction__Class* get_class() {
            return il2cpp::get_class<app::SeinLocalSpeedAction__Class>(type_info, "", "SeinLocalSpeedAction");
        }
        inline app::SeinLocalSpeedAction* create() {
            return il2cpp::create_object<app::SeinLocalSpeedAction>(get_class());
        }
    } // namespace SeinLocalSpeedAction
} // namespace app::classes::types
