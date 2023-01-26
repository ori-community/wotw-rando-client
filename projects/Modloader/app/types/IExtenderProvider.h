#pragma once
#include <Modloader/app/structs/IExtenderProvider.h>
#include <Modloader/app/structs/IExtenderProvider__Array.h>
#include <Modloader/app/structs/IExtenderProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IExtenderProvider {
        inline app::IExtenderProvider__Class** type_info() {
            static app::IExtenderProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IExtenderProvider__Class**)(modloader::win::memory::resolve_rva(0x04785CA0));
            }
            return cache;
        }
        inline app::IExtenderProvider__Class* get_class() {
            return il2cpp::get_class<app::IExtenderProvider__Class>(type_info(), "System.ComponentModel", "IExtenderProvider");
        }
        inline app::IExtenderProvider__Array* create_array(int size) {
            return il2cpp::array_new<app::IExtenderProvider__Array>(get_class(), size);
        }
        inline app::IExtenderProvider__Array* create_array(const std::vector<app::IExtenderProvider*>& items) {
            return il2cpp::array_new<app::IExtenderProvider__Array>(get_class(), items);
        }
    } // namespace IExtenderProvider
} // namespace app::classes::types
