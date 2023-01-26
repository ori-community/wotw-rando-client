#pragma once
#include <Modloader/app/structs/CancellationTokenRegistration.h>
#include <Modloader/app/structs/CancellationTokenRegistration__Array.h>
#include <Modloader/app/structs/CancellationTokenRegistration__Boxed.h>
#include <Modloader/app/structs/CancellationTokenRegistration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CancellationTokenRegistration {
        inline app::CancellationTokenRegistration__Class** type_info() {
            static app::CancellationTokenRegistration__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CancellationTokenRegistration__Class**)(modloader::win::memory::resolve_rva(0x0472C688));
            }
            return cache;
        }
        inline app::CancellationTokenRegistration__Class* get_class() {
            return il2cpp::get_class<app::CancellationTokenRegistration__Class>(type_info(), "System.Threading", "CancellationTokenRegistration");
        }
        inline app::CancellationTokenRegistration* create() {
            return il2cpp::create_object<app::CancellationTokenRegistration>(get_class());
        }
        inline app::CancellationTokenRegistration__Boxed* box(app::CancellationTokenRegistration value) {
            return il2cpp::box_value<app::CancellationTokenRegistration__Boxed>(get_class(), value);
        }
        inline app::CancellationTokenRegistration__Array* create_array(int size) {
            return il2cpp::array_new<app::CancellationTokenRegistration__Array>(get_class(), size);
        }
        inline app::CancellationTokenRegistration__Array* create_array(const std::vector<app::CancellationTokenRegistration>& items) {
            return il2cpp::array_new<app::CancellationTokenRegistration__Array>(get_class(), items);
        }
    } // namespace CancellationTokenRegistration
} // namespace app::classes::types
