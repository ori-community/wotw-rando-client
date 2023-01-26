#pragma once
#include <Modloader/app/structs/FinishHandlerService.h>
#include <Modloader/app/structs/FinishHandlerService__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FinishHandlerService {
        inline app::FinishHandlerService__Class** type_info() {
            static app::FinishHandlerService__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FinishHandlerService__Class**)(modloader::win::memory::resolve_rva(0x0473CF98));
            }
            return cache;
        }
        inline app::FinishHandlerService__Class* get_class() {
            return il2cpp::get_class<app::FinishHandlerService__Class>(type_info(), "", "FinishHandlerService");
        }
        inline app::FinishHandlerService* create() {
            return il2cpp::create_object<app::FinishHandlerService>(get_class());
        }
    } // namespace FinishHandlerService
} // namespace app::classes::types
