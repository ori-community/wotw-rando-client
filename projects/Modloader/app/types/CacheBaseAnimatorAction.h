#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CacheBaseAnimatorAction {
        namespace {
            inline app::CacheBaseAnimatorAction__Class* type_info_ref = nullptr;
        }
        inline app::CacheBaseAnimatorAction__Class** type_info = &type_info_ref;
        inline app::CacheBaseAnimatorAction__Class* get_class() {
            return il2cpp::get_class<app::CacheBaseAnimatorAction__Class>(type_info, "", "CacheBaseAnimatorAction");
        }
        inline app::CacheBaseAnimatorAction* create() {
            return il2cpp::create_object<app::CacheBaseAnimatorAction>(get_class());
        }
    } // namespace CacheBaseAnimatorAction
} // namespace app::classes::types
