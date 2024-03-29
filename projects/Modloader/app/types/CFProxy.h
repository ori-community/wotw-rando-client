#pragma once
#include <Modloader/app/structs/CFProxy.h>
#include <Modloader/app/structs/CFProxy__Array.h>
#include <Modloader/app/structs/CFProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CFProxy {
        inline app::CFProxy__Class** type_info() {
            static app::CFProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CFProxy__Class**)(modloader::win::memory::resolve_rva(0x04751140));
            }
            return cache;
        }
        inline app::CFProxy__Class* get_class() {
            return il2cpp::get_class<app::CFProxy__Class>(type_info(), "Mono.Net", "CFProxy");
        }
        inline app::CFProxy* create() {
            return il2cpp::create_object<app::CFProxy>(get_class());
        }
        inline app::CFProxy__Array* create_array(int size) {
            return il2cpp::array_new<app::CFProxy__Array>(get_class(), size);
        }
        inline app::CFProxy__Array* create_array(const std::vector<app::CFProxy*>& items) {
            return il2cpp::array_new<app::CFProxy__Array>(get_class(), items);
        }
    } // namespace CFProxy
} // namespace app::classes::types
