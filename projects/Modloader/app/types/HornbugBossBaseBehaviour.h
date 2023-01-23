#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HornbugBossBaseBehaviour__Class.h>
#include <Modloader/app/structs/HornbugBossBaseBehaviour.h>

namespace app::classes::types {
    namespace HornbugBossBaseBehaviour {
        namespace {
            inline app::HornbugBossBaseBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::HornbugBossBaseBehaviour__Class** type_info = &type_info_ref;
        inline app::HornbugBossBaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HornbugBossBaseBehaviour__Class>(type_info, "", "HornbugBossBaseBehaviour");
        }
        inline app::HornbugBossBaseBehaviour* create() {
            return il2cpp::create_object<app::HornbugBossBaseBehaviour>(get_class());
        }
    } // namespace HornbugBossBaseBehaviour
} // namespace app::classes::types
