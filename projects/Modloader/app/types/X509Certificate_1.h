#pragma once
#include <Modloader/app/structs/X509Certificate_1.h>
#include <Modloader/app/structs/X509Certificate_1__Array.h>
#include <Modloader/app/structs/X509Certificate_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509Certificate_1 {
        inline app::X509Certificate_1__Class** type_info() {
            static app::X509Certificate_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X509Certificate_1__Class**)(modloader::win::memory::resolve_rva(0x0472CCD0));
            }
            return cache;
        }
        inline app::X509Certificate_1__Class* get_class() {
            return il2cpp::get_class<app::X509Certificate_1__Class>(type_info(), "System.Security.Cryptography.X509Certificates", "X509Certificate");
        }
        inline app::X509Certificate_1* create() {
            return il2cpp::create_object<app::X509Certificate_1>(get_class());
        }
        inline app::X509Certificate_1__Array* create_array(int size) {
            return il2cpp::array_new<app::X509Certificate_1__Array>(get_class(), size);
        }
        inline app::X509Certificate_1__Array* create_array(const std::vector<app::X509Certificate_1*>& items) {
            return il2cpp::array_new<app::X509Certificate_1__Array>(get_class(), items);
        }
    } // namespace X509Certificate_1
} // namespace app::classes::types
