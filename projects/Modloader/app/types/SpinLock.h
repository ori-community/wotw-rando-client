#pragma once
#include <Modloader/app/structs/SpinLock.h>
#include <Modloader/app/structs/SpinLock__Boxed.h>
#include <Modloader/app/structs/SpinLock__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpinLock {
        inline app::SpinLock__Class** type_info() {
            static app::SpinLock__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpinLock__Class**)(modloader::win::memory::resolve_rva(0x047290E0));
            }
            return cache;
        }
        inline app::SpinLock__Class* get_class() {
            return il2cpp::get_class<app::SpinLock__Class>(type_info(), "System.Threading", "SpinLock");
        }
        inline app::SpinLock* create() {
            return il2cpp::create_object<app::SpinLock>(get_class());
        }
        inline app::SpinLock__Boxed* box(app::SpinLock value) {
            return il2cpp::box_value<app::SpinLock__Boxed>(get_class(), value);
        }
    } // namespace SpinLock
} // namespace app::classes::types
