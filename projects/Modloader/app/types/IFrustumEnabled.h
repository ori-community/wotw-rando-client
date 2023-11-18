#pragma once
#include <Modloader/app/structs/IFrustumEnabled.h>
#include <Modloader/app/structs/IFrustumEnabled__Array.h>
#include <Modloader/app/structs/IFrustumEnabled__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IFrustumEnabled {
        inline app::IFrustumEnabled__Class** type_info() {
            static app::IFrustumEnabled__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IFrustumEnabled__Class**)(modloader::win::memory::resolve_rva(0x0472BBB0));
            }
            return cache;
        }
        inline app::IFrustumEnabled__Class* get_class() {
            return il2cpp::get_class<app::IFrustumEnabled__Class>(type_info(), "Game", "IFrustumEnabled");
        }
        inline app::IFrustumEnabled__Array* create_array(int size) {
            return il2cpp::array_new<app::IFrustumEnabled__Array>(get_class(), size);
        }
        inline app::IFrustumEnabled__Array* create_array(const std::vector<app::IFrustumEnabled*>& items) {
            return il2cpp::array_new<app::IFrustumEnabled__Array>(get_class(), items);
        }
    } // namespace IFrustumEnabled
} // namespace app::classes::types
