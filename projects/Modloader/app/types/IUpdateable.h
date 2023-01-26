#pragma once
#include <Modloader/app/structs/IUpdateable.h>
#include <Modloader/app/structs/IUpdateable__Array.h>
#include <Modloader/app/structs/IUpdateable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IUpdateable {
        inline app::IUpdateable__Class** type_info() {
            static app::IUpdateable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IUpdateable__Class**)(modloader::win::memory::resolve_rva(0x04771F18));
            }
            return cache;
        }
        inline app::IUpdateable__Class* get_class() {
            return il2cpp::get_class<app::IUpdateable__Class>(type_info(), "SystemIntegration", "IUpdateable");
        }
        inline app::IUpdateable__Array* create_array(int size) {
            return il2cpp::array_new<app::IUpdateable__Array>(get_class(), size);
        }
        inline app::IUpdateable__Array* create_array(const std::vector<app::IUpdateable*>& items) {
            return il2cpp::array_new<app::IUpdateable__Array>(get_class(), items);
        }
    } // namespace IUpdateable
} // namespace app::classes::types
