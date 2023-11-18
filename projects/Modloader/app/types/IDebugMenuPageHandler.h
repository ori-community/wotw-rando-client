#pragma once
#include <Modloader/app/structs/IDebugMenuPageHandler.h>
#include <Modloader/app/structs/IDebugMenuPageHandler__Array.h>
#include <Modloader/app/structs/IDebugMenuPageHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDebugMenuPageHandler {
        inline app::IDebugMenuPageHandler__Class** type_info() {
            static app::IDebugMenuPageHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDebugMenuPageHandler__Class**)(modloader::win::memory::resolve_rva(0x04790A88));
            }
            return cache;
        }
        inline app::IDebugMenuPageHandler__Class* get_class() {
            return il2cpp::get_class<app::IDebugMenuPageHandler__Class>(type_info(), "", "IDebugMenuPageHandler");
        }
        inline app::IDebugMenuPageHandler__Array* create_array(int size) {
            return il2cpp::array_new<app::IDebugMenuPageHandler__Array>(get_class(), size);
        }
        inline app::IDebugMenuPageHandler__Array* create_array(const std::vector<app::IDebugMenuPageHandler*>& items) {
            return il2cpp::array_new<app::IDebugMenuPageHandler__Array>(get_class(), items);
        }
    } // namespace IDebugMenuPageHandler
} // namespace app::classes::types
