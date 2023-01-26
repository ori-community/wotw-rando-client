#pragma once
#include <Modloader/app/structs/IDebugMenuPage.h>
#include <Modloader/app/structs/IDebugMenuPage__Array.h>
#include <Modloader/app/structs/IDebugMenuPage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDebugMenuPage {
        inline app::IDebugMenuPage__Class** type_info() {
            static app::IDebugMenuPage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDebugMenuPage__Class**)(modloader::win::memory::resolve_rva(0x0474ADC8));
            }
            return cache;
        }
        inline app::IDebugMenuPage__Class* get_class() {
            return il2cpp::get_class<app::IDebugMenuPage__Class>(type_info(), "", "IDebugMenuPage");
        }
        inline app::IDebugMenuPage__Array* create_array(int size) {
            return il2cpp::array_new<app::IDebugMenuPage__Array>(get_class(), size);
        }
        inline app::IDebugMenuPage__Array* create_array(const std::vector<app::IDebugMenuPage*>& items) {
            return il2cpp::array_new<app::IDebugMenuPage__Array>(get_class(), items);
        }
    } // namespace IDebugMenuPage
} // namespace app::classes::types
