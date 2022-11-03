#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoTlsProvider {
        inline app::MonoTlsProvider__Class** type_info = (app::MonoTlsProvider__Class**)(modloader::win::memory::resolve_rva(0x047245B0));
        inline app::MonoTlsProvider__Class* get_class() {
            return il2cpp::get_class<app::MonoTlsProvider__Class>(type_info, "Mono.Security.Interface", "MonoTlsProvider");
        }
        inline app::MonoTlsProvider* create() {
            return il2cpp::create_object<app::MonoTlsProvider>(get_class());
        }
        inline app::MonoTlsProvider__Array* create_array(int size) {
            return il2cpp::array_new<app::MonoTlsProvider__Array>(get_class(), size);
        }
        inline app::MonoTlsProvider__Array* create_array(const std::vector<app::MonoTlsProvider*>& items) {
            return il2cpp::array_new<app::MonoTlsProvider__Array>(get_class(), items);
        }
    } // namespace MonoTlsProvider
} // namespace app::classes::types
