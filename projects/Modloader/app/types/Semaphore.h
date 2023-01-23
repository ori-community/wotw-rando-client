#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Semaphore__Class.h>
#include <Modloader/app/structs/Semaphore.h>

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
