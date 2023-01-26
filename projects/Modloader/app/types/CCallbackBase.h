#pragma once
#include <Modloader/app/structs/CCallbackBase.h>
#include <Modloader/app/structs/CCallbackBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CCallbackBase {
        inline app::CCallbackBase__Class** type_info() {
            static app::CCallbackBase__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CCallbackBase__Class**)(modloader::win::memory::resolve_rva(0x0471DD90));
            }
            return cache;
        }
        inline app::CCallbackBase__Class* get_class() {
            return il2cpp::get_class<app::CCallbackBase__Class>(type_info(), "Steamworks", "CCallbackBase");
        }
        inline app::CCallbackBase* create() {
            return il2cpp::create_object<app::CCallbackBase>(get_class());
        }
    } // namespace CCallbackBase
} // namespace app::classes::types
