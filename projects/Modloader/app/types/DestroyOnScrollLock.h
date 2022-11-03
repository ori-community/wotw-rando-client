#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DestroyOnScrollLock {
        namespace {
            inline app::DestroyOnScrollLock__Class* type_info_ref = nullptr;
        }
        inline app::DestroyOnScrollLock__Class** type_info = &type_info_ref;
        inline app::DestroyOnScrollLock__Class* get_class() {
            return il2cpp::get_class<app::DestroyOnScrollLock__Class>(type_info, "", "DestroyOnScrollLock");
        }
        inline app::DestroyOnScrollLock* create() {
            return il2cpp::create_object<app::DestroyOnScrollLock>(get_class());
        }
    } // namespace DestroyOnScrollLock
} // namespace app::classes::types
