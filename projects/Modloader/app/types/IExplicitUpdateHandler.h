#pragma once
#include <Modloader/app/structs/IExplicitUpdateHandler.h>
#include <Modloader/app/structs/IExplicitUpdateHandler__Array.h>
#include <Modloader/app/structs/IExplicitUpdateHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IExplicitUpdateHandler {
        inline app::IExplicitUpdateHandler__Class** type_info() {
            static app::IExplicitUpdateHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IExplicitUpdateHandler__Class**)(modloader::win::memory::resolve_rva(0x04710D00));
            }
            return cache;
        }
        inline app::IExplicitUpdateHandler__Class* get_class() {
            return il2cpp::get_class<app::IExplicitUpdateHandler__Class>(type_info(), "Moon", "IExplicitUpdateHandler");
        }
        inline app::IExplicitUpdateHandler__Array* create_array(int size) {
            return il2cpp::array_new<app::IExplicitUpdateHandler__Array>(get_class(), size);
        }
        inline app::IExplicitUpdateHandler__Array* create_array(const std::vector<app::IExplicitUpdateHandler*>& items) {
            return il2cpp::array_new<app::IExplicitUpdateHandler__Array>(get_class(), items);
        }
    } // namespace IExplicitUpdateHandler
} // namespace app::classes::types
