#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace X509Certificate_2 {
        inline app::X509Certificate_2__Class** type_info = (app::X509Certificate_2__Class**)(modloader::win::memory::resolve_rva(0x0474EEE8));
        inline app::X509Certificate_2__Class* get_class() {
            return il2cpp::get_class<app::X509Certificate_2__Class>(type_info, "Mono.Security.X509", "X509Certificate");
        }
        inline app::X509Certificate_2* create() {
            return il2cpp::create_object<app::X509Certificate_2>(get_class());
        }
        inline app::X509Certificate_2__Array* create_array(int size) {
            return il2cpp::array_new<app::X509Certificate_2__Array>(get_class(), size);
        }
        inline app::X509Certificate_2__Array* create_array(const std::vector<app::X509Certificate_2*>& items) {
            return il2cpp::array_new<app::X509Certificate_2__Array>(get_class(), items);
        }
    } // namespace X509Certificate_2
} // namespace app::classes::types
