#pragma once
#include <Modloader/app/structs/CCallbackBaseVTable_GetCallbackSizeBytesDel.h>
#include <Modloader/app/structs/CCallbackBaseVTable_GetCallbackSizeBytesDel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CCallbackBaseVTable_GetCallbackSizeBytesDel {
        inline app::CCallbackBaseVTable_GetCallbackSizeBytesDel__Class** type_info() {
            static app::CCallbackBaseVTable_GetCallbackSizeBytesDel__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CCallbackBaseVTable_GetCallbackSizeBytesDel__Class**)(modloader::win::memory::resolve_rva(0x04769EB8));
            }
            return cache;
        }
        inline app::CCallbackBaseVTable_GetCallbackSizeBytesDel__Class* get_class() {
            return il2cpp::get_nested_class<app::CCallbackBaseVTable_GetCallbackSizeBytesDel__Class>(type_info(), "Steamworks", "CCallbackBaseVTable", "GetCallbackSizeBytesDel");
        }
        inline app::CCallbackBaseVTable_GetCallbackSizeBytesDel* create() {
            return il2cpp::create_object<app::CCallbackBaseVTable_GetCallbackSizeBytesDel>(get_class());
        }
    } // namespace CCallbackBaseVTable_GetCallbackSizeBytesDel
} // namespace app::classes::types
