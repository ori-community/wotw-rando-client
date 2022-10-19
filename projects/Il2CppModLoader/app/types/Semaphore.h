#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Semaphore {
        namespace {
            inline app::Semaphore__Class* type_info_ref = nullptr;
        }
        inline app::Semaphore__Class** type_info = &type_info_ref;
        inline app::Semaphore__Class* get_class() {
            return il2cpp::get_class<app::Semaphore__Class>(type_info, "System.Threading", "Semaphore");
        }
        inline app::Semaphore* create() {
            return il2cpp::create_object<app::Semaphore>(get_class());
        }
    } // namespace Semaphore
} // namespace app::classes::types
