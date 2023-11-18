#pragma once
#include <Modloader/app/structs/DestroyOnScrollLock.h>
#include <Modloader/app/structs/DestroyOnScrollLock__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DestroyOnScrollLock {
        inline app::DestroyOnScrollLock__Class** type_info() {
            static app::DestroyOnScrollLock__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DestroyOnScrollLock__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DestroyOnScrollLock__Class* get_class() {
            return il2cpp::get_class<app::DestroyOnScrollLock__Class>(type_info(), "", "DestroyOnScrollLock");
        }
        inline app::DestroyOnScrollLock* create() {
            return il2cpp::create_object<app::DestroyOnScrollLock>(get_class());
        }
    } // namespace DestroyOnScrollLock
} // namespace app::classes::types
