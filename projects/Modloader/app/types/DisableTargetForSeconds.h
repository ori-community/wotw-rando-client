#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DisableTargetForSeconds__Class.h>
#include <Modloader/app/structs/DisableTargetForSeconds.h>

namespace app::classes::types {
    namespace DisableTargetForSeconds {
        namespace {
            inline app::DisableTargetForSeconds__Class* type_info_ref = nullptr;
        }
        inline app::DisableTargetForSeconds__Class** type_info = &type_info_ref;
        inline app::DisableTargetForSeconds__Class* get_class() {
            return il2cpp::get_class<app::DisableTargetForSeconds__Class>(type_info, "", "DisableTargetForSeconds");
        }
        inline app::DisableTargetForSeconds* create() {
            return il2cpp::create_object<app::DisableTargetForSeconds>(get_class());
        }
    } // namespace DisableTargetForSeconds
} // namespace app::classes::types
