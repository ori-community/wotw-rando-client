#pragma once
#include <Modloader/app/structs/CCallbackBaseVTable_RunCBDel.h>
#include <Modloader/app/structs/CCallbackBaseVTable_RunCBDel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CCallbackBaseVTable_RunCBDel {
        inline app::CCallbackBaseVTable_RunCBDel__Class** type_info() {
            static app::CCallbackBaseVTable_RunCBDel__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CCallbackBaseVTable_RunCBDel__Class**)(modloader::win::memory::resolve_rva(0x04765B98));
            }
            return cache;
        }
        inline app::CCallbackBaseVTable_RunCBDel__Class* get_class() {
            return il2cpp::get_nested_class<app::CCallbackBaseVTable_RunCBDel__Class>(type_info(), "Steamworks", "CCallbackBaseVTable", "RunCBDel");
        }
        inline app::CCallbackBaseVTable_RunCBDel* create() {
            return il2cpp::create_object<app::CCallbackBaseVTable_RunCBDel>(get_class());
        }
    } // namespace CCallbackBaseVTable_RunCBDel
} // namespace app::classes::types
