#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FinishHandlerService {
        inline app::FinishHandlerService__Class** type_info = (app::FinishHandlerService__Class**)(modloader::win::memory::resolve_rva(0x0473CF98));
        inline app::FinishHandlerService__Class* get_class() {
            return il2cpp::get_class<app::FinishHandlerService__Class>(type_info, "", "FinishHandlerService");
        }
        inline app::FinishHandlerService* create() {
            return il2cpp::create_object<app::FinishHandlerService>(get_class());
        }
    } // namespace FinishHandlerService
} // namespace app::classes::types
