#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CCallbackBaseVTable_RunCRDel__Class.h>
#include <Modloader/app/structs/CCallbackBaseVTable_RunCRDel.h>

namespace app::classes::types {
    namespace CCallbackBaseVTable_RunCRDel {
        inline app::CCallbackBaseVTable_RunCRDel__Class** type_info = (app::CCallbackBaseVTable_RunCRDel__Class**)(modloader::win::memory::resolve_rva(0x0478FB20));
        inline app::CCallbackBaseVTable_RunCRDel__Class* get_class() {
            return il2cpp::get_nested_class<app::CCallbackBaseVTable_RunCRDel__Class>(type_info, "Steamworks", "CCallbackBaseVTable", "RunCRDel");
        }
        inline app::CCallbackBaseVTable_RunCRDel* create() {
            return il2cpp::create_object<app::CCallbackBaseVTable_RunCRDel>(get_class());
        }
    } // namespace CCallbackBaseVTable_RunCRDel
} // namespace app::classes::types
