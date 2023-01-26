#pragma once
#include <Modloader/app/structs/CCallbackBaseVTable.h>
#include <Modloader/app/structs/CCallbackBaseVTable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CCallbackBaseVTable {
        inline app::CCallbackBaseVTable__Class** type_info() {
            static app::CCallbackBaseVTable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CCallbackBaseVTable__Class**)(modloader::win::memory::resolve_rva(0x0476DDC0));
            }
            return cache;
        }
        inline app::CCallbackBaseVTable__Class* get_class() {
            return il2cpp::get_class<app::CCallbackBaseVTable__Class>(type_info(), "Steamworks", "CCallbackBaseVTable");
        }
        inline app::CCallbackBaseVTable* create() {
            return il2cpp::create_object<app::CCallbackBaseVTable>(get_class());
        }
    } // namespace CCallbackBaseVTable
} // namespace app::classes::types
