#pragma once
#include <Modloader/app/structs/LockRecursionException.h>
#include <Modloader/app/structs/LockRecursionException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LockRecursionException {
        inline app::LockRecursionException__Class** type_info() {
            static app::LockRecursionException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LockRecursionException__Class**)(modloader::win::memory::resolve_rva(0x047947B0));
            }
            return cache;
        }
        inline app::LockRecursionException__Class* get_class() {
            return il2cpp::get_class<app::LockRecursionException__Class>(type_info(), "System.Threading", "LockRecursionException");
        }
        inline app::LockRecursionException* create() {
            return il2cpp::create_object<app::LockRecursionException>(get_class());
        }
    } // namespace LockRecursionException
} // namespace app::classes::types
