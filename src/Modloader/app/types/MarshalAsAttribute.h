#pragma once
#include <Modloader/app/structs/MarshalAsAttribute.h>
#include <Modloader/app/structs/MarshalAsAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MarshalAsAttribute {
        inline app::MarshalAsAttribute__Class** type_info() {
            static app::MarshalAsAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MarshalAsAttribute__Class**)(modloader::win::memory::resolve_rva(0x04759DD0));
            }
            return cache;
        }
        inline app::MarshalAsAttribute__Class* get_class() {
            return il2cpp::get_class<app::MarshalAsAttribute__Class>(type_info(), "System.Runtime.InteropServices", "MarshalAsAttribute");
        }
        inline app::MarshalAsAttribute* create() {
            return il2cpp::create_object<app::MarshalAsAttribute>(get_class());
        }
    } // namespace MarshalAsAttribute
} // namespace app::classes::types
