#pragma once
#include <Modloader/app/structs/InteropHelp_UTF8StringHandle.h>
#include <Modloader/app/structs/InteropHelp_UTF8StringHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteropHelp_UTF8StringHandle {
        inline app::InteropHelp_UTF8StringHandle__Class** type_info() {
            static app::InteropHelp_UTF8StringHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InteropHelp_UTF8StringHandle__Class**)(modloader::win::memory::resolve_rva(0x04718868));
            }
            return cache;
        }
        inline app::InteropHelp_UTF8StringHandle__Class* get_class() {
            return il2cpp::get_nested_class<app::InteropHelp_UTF8StringHandle__Class>(type_info(), "Steamworks", "InteropHelp", "UTF8StringHandle");
        }
        inline app::InteropHelp_UTF8StringHandle* create() {
            return il2cpp::create_object<app::InteropHelp_UTF8StringHandle>(get_class());
        }
    } // namespace InteropHelp_UTF8StringHandle
} // namespace app::classes::types
