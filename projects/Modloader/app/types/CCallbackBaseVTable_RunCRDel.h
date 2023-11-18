#pragma once
#include <Modloader/app/structs/CCallbackBaseVTable_RunCRDel.h>
#include <Modloader/app/structs/CCallbackBaseVTable_RunCRDel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CCallbackBaseVTable_RunCRDel {
        inline app::CCallbackBaseVTable_RunCRDel__Class** type_info() {
            static app::CCallbackBaseVTable_RunCRDel__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CCallbackBaseVTable_RunCRDel__Class**)(modloader::win::memory::resolve_rva(0x0478FB20));
            }
            return cache;
        }
        inline app::CCallbackBaseVTable_RunCRDel__Class* get_class() {
            return il2cpp::get_nested_class<app::CCallbackBaseVTable_RunCRDel__Class>(type_info(), "Steamworks", "CCallbackBaseVTable", "RunCRDel");
        }
        inline app::CCallbackBaseVTable_RunCRDel* create() {
            return il2cpp::create_object<app::CCallbackBaseVTable_RunCRDel>(get_class());
        }
    } // namespace CCallbackBaseVTable_RunCRDel
} // namespace app::classes::types
