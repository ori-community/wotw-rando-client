#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CCallbackBaseVTable_GetCallbackSizeBytesDel__Class.h>
#include <Modloader/app/structs/CCallbackBaseVTable_GetCallbackSizeBytesDel.h>

namespace app::classes::types {
    namespace CCallbackBaseVTable_GetCallbackSizeBytesDel {
        inline app::CCallbackBaseVTable_GetCallbackSizeBytesDel__Class** type_info = (app::CCallbackBaseVTable_GetCallbackSizeBytesDel__Class**)(modloader::win::memory::resolve_rva(0x04769EB8));
        inline app::CCallbackBaseVTable_GetCallbackSizeBytesDel__Class* get_class() {
            return il2cpp::get_nested_class<app::CCallbackBaseVTable_GetCallbackSizeBytesDel__Class>(type_info, "Steamworks", "CCallbackBaseVTable", "GetCallbackSizeBytesDel");
        }
        inline app::CCallbackBaseVTable_GetCallbackSizeBytesDel* create() {
            return il2cpp::create_object<app::CCallbackBaseVTable_GetCallbackSizeBytesDel>(get_class());
        }
    } // namespace CCallbackBaseVTable_GetCallbackSizeBytesDel
} // namespace app::classes::types
