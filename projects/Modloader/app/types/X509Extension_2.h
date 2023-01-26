#pragma once
#include <Modloader/app/structs/X509Extension_2.h>
#include <Modloader/app/structs/X509Extension_2__Array.h>
#include <Modloader/app/structs/X509Extension_2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509Extension_2 {
        inline app::X509Extension_2__Class** type_info() {
            static app::X509Extension_2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X509Extension_2__Class**)(modloader::win::memory::resolve_rva(0x04706288));
            }
            return cache;
        }
        inline app::X509Extension_2__Class* get_class() {
            return il2cpp::get_class<app::X509Extension_2__Class>(type_info(), "Mono.Security.X509", "X509Extension");
        }
        inline app::X509Extension_2* create() {
            return il2cpp::create_object<app::X509Extension_2>(get_class());
        }
        inline app::X509Extension_2__Array* create_array(int size) {
            return il2cpp::array_new<app::X509Extension_2__Array>(get_class(), size);
        }
        inline app::X509Extension_2__Array* create_array(const std::vector<app::X509Extension_2*>& items) {
            return il2cpp::array_new<app::X509Extension_2__Array>(get_class(), items);
        }
    } // namespace X509Extension_2
} // namespace app::classes::types
