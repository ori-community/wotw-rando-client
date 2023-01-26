#pragma once
#include <Modloader/app/structs/IReflectableType.h>
#include <Modloader/app/structs/IReflectableType__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IReflectableType {
        inline app::IReflectableType__Class** type_info() {
            static app::IReflectableType__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IReflectableType__Class**)(modloader::win::memory::resolve_rva(0x04745F30));
            }
            return cache;
        }
        inline app::IReflectableType__Class* get_class() {
            return il2cpp::get_class<app::IReflectableType__Class>(type_info(), "System.Reflection", "IReflectableType");
        }
    } // namespace IReflectableType
} // namespace app::classes::types
