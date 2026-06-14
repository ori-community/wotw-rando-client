#pragma once
#include <Modloader/app/structs/IExtenderListService.h>
#include <Modloader/app/structs/IExtenderListService__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IExtenderListService {
        inline app::IExtenderListService__Class** type_info() {
            static app::IExtenderListService__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IExtenderListService__Class**)(modloader::win::memory::resolve_rva(0x0471EF60));
            }
            return cache;
        }
        inline app::IExtenderListService__Class* get_class() {
            return il2cpp::get_class<app::IExtenderListService__Class>(type_info(), "System.ComponentModel.Design", "IExtenderListService");
        }
    } // namespace IExtenderListService
} // namespace app::classes::types
