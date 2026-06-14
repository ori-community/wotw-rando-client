#pragma once
#include <Modloader/app/structs/Semaphore_1.h>
#include <Modloader/app/structs/Semaphore_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Semaphore_1 {
        inline app::Semaphore_1__Class** type_info() {
            static app::Semaphore_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Semaphore_1__Class**)(modloader::win::memory::resolve_rva(0x04747898));
            }
            return cache;
        }
        inline app::Semaphore_1__Class* get_class() {
            return il2cpp::get_class<app::Semaphore_1__Class>(type_info(), "System.Net", "Semaphore");
        }
        inline app::Semaphore_1* create() {
            return il2cpp::create_object<app::Semaphore_1>(get_class());
        }
    } // namespace Semaphore_1
} // namespace app::classes::types
