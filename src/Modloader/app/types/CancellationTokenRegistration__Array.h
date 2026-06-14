#pragma once
#include <Modloader/app/structs/CancellationTokenRegistration__Array.h>
#include <Modloader/app/structs/CancellationTokenRegistration__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CancellationTokenRegistration__Array {
        inline app::CancellationTokenRegistration__Array__Class** type_info() {
            static app::CancellationTokenRegistration__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CancellationTokenRegistration__Array__Class**)(modloader::win::memory::resolve_rva(0x0474E290));
            }
            return cache;
        }
        inline app::CancellationTokenRegistration__Array__Class* get_class() {
            return il2cpp::get_class<app::CancellationTokenRegistration__Array__Class>(type_info(), "System.Threading", "CancellationTokenRegistration[]");
        }
        inline app::CancellationTokenRegistration__Array* create() {
            return il2cpp::create_object<app::CancellationTokenRegistration__Array>(get_class());
        }
    } // namespace CancellationTokenRegistration__Array
} // namespace app::classes::types
