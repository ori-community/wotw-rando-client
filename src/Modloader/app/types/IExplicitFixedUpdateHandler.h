#pragma once
#include <Modloader/app/structs/IExplicitFixedUpdateHandler.h>
#include <Modloader/app/structs/IExplicitFixedUpdateHandler__Array.h>
#include <Modloader/app/structs/IExplicitFixedUpdateHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IExplicitFixedUpdateHandler {
        inline app::IExplicitFixedUpdateHandler__Class** type_info() {
            static app::IExplicitFixedUpdateHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IExplicitFixedUpdateHandler__Class**)(modloader::win::memory::resolve_rva(0x0478FCD0));
            }
            return cache;
        }
        inline app::IExplicitFixedUpdateHandler__Class* get_class() {
            return il2cpp::get_class<app::IExplicitFixedUpdateHandler__Class>(type_info(), "Moon", "IExplicitFixedUpdateHandler");
        }
        inline app::IExplicitFixedUpdateHandler__Array* create_array(int size) {
            return il2cpp::array_new<app::IExplicitFixedUpdateHandler__Array>(get_class(), size);
        }
        inline app::IExplicitFixedUpdateHandler__Array* create_array(const std::vector<app::IExplicitFixedUpdateHandler*>& items) {
            return il2cpp::array_new<app::IExplicitFixedUpdateHandler__Array>(get_class(), items);
        }
    } // namespace IExplicitFixedUpdateHandler
} // namespace app::classes::types
