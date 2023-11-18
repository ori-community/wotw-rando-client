#pragma once
#include <Modloader/app/structs/InAttribute.h>
#include <Modloader/app/structs/InAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InAttribute {
        inline app::InAttribute__Class** type_info() {
            static app::InAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InAttribute__Class**)(modloader::win::memory::resolve_rva(0x0472F280));
            }
            return cache;
        }
        inline app::InAttribute__Class* get_class() {
            return il2cpp::get_class<app::InAttribute__Class>(type_info(), "System.Runtime.InteropServices", "InAttribute");
        }
        inline app::InAttribute* create() {
            return il2cpp::create_object<app::InAttribute>(get_class());
        }
    } // namespace InAttribute
} // namespace app::classes::types
