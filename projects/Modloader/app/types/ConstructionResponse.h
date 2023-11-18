#pragma once
#include <Modloader/app/structs/ConstructionResponse.h>
#include <Modloader/app/structs/ConstructionResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConstructionResponse {
        inline app::ConstructionResponse__Class** type_info() {
            static app::ConstructionResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConstructionResponse__Class**)(modloader::win::memory::resolve_rva(0x04769E00));
            }
            return cache;
        }
        inline app::ConstructionResponse__Class* get_class() {
            return il2cpp::get_class<app::ConstructionResponse__Class>(type_info(), "System.Runtime.Remoting.Messaging", "ConstructionResponse");
        }
        inline app::ConstructionResponse* create() {
            return il2cpp::create_object<app::ConstructionResponse>(get_class());
        }
    } // namespace ConstructionResponse
} // namespace app::classes::types
