#pragma once
#include <Modloader/app/structs/ServerTriggeredActionData.h>
#include <Modloader/app/structs/ServerTriggeredActionData__Array.h>
#include <Modloader/app/structs/ServerTriggeredActionData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerTriggeredActionData {
        inline app::ServerTriggeredActionData__Class** type_info() {
            static app::ServerTriggeredActionData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ServerTriggeredActionData__Class**)(modloader::win::memory::resolve_rva(0x0475B4B8));
            }
            return cache;
        }
        inline app::ServerTriggeredActionData__Class* get_class() {
            return il2cpp::get_class<app::ServerTriggeredActionData__Class>(type_info(), "", "ServerTriggeredActionData");
        }
        inline app::ServerTriggeredActionData* create() {
            return il2cpp::create_object<app::ServerTriggeredActionData>(get_class());
        }
        inline app::ServerTriggeredActionData__Array* create_array(int size) {
            return il2cpp::array_new<app::ServerTriggeredActionData__Array>(get_class(), size);
        }
        inline app::ServerTriggeredActionData__Array* create_array(const std::vector<app::ServerTriggeredActionData*>& items) {
            return il2cpp::array_new<app::ServerTriggeredActionData__Array>(get_class(), items);
        }
    } // namespace ServerTriggeredActionData
} // namespace app::classes::types
