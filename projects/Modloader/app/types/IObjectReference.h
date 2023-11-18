#pragma once
#include <Modloader/app/structs/IObjectReference.h>
#include <Modloader/app/structs/IObjectReference__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IObjectReference {
        inline app::IObjectReference__Class** type_info() {
            static app::IObjectReference__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IObjectReference__Class**)(modloader::win::memory::resolve_rva(0x0472B148));
            }
            return cache;
        }
        inline app::IObjectReference__Class* get_class() {
            return il2cpp::get_class<app::IObjectReference__Class>(type_info(), "System.Runtime.Serialization", "IObjectReference");
        }
    } // namespace IObjectReference
} // namespace app::classes::types
