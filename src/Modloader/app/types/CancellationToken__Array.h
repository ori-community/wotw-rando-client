#pragma once
#include <Modloader/app/structs/CancellationToken__Array.h>
#include <Modloader/app/structs/CancellationToken__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CancellationToken__Array {
        inline app::CancellationToken__Array__Class** type_info() {
            static app::CancellationToken__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CancellationToken__Array__Class**)(modloader::win::memory::resolve_rva(0x04786990));
            }
            return cache;
        }
        inline app::CancellationToken__Array__Class* get_class() {
            return il2cpp::get_class<app::CancellationToken__Array__Class>(type_info(), "System.Threading", "CancellationToken[]");
        }
        inline app::CancellationToken__Array* create() {
            return il2cpp::create_object<app::CancellationToken__Array>(get_class());
        }
    } // namespace CancellationToken__Array
} // namespace app::classes::types
