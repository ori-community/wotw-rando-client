#pragma once
#include <Modloader/app/structs/AbandonedMutexException.h>
#include <Modloader/app/structs/AbandonedMutexException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AbandonedMutexException {
        inline app::AbandonedMutexException__Class** type_info() {
            static app::AbandonedMutexException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AbandonedMutexException__Class**)(modloader::win::memory::resolve_rva(0x047239E0));
            }
            return cache;
        }
        inline app::AbandonedMutexException__Class* get_class() {
            return il2cpp::get_class<app::AbandonedMutexException__Class>(type_info(), "System.Threading", "AbandonedMutexException");
        }
        inline app::AbandonedMutexException* create() {
            return il2cpp::create_object<app::AbandonedMutexException>(get_class());
        }
    } // namespace AbandonedMutexException
} // namespace app::classes::types
