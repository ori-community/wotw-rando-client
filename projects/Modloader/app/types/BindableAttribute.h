#pragma once
#include <Modloader/app/structs/BindableAttribute.h>
#include <Modloader/app/structs/BindableAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BindableAttribute {
        inline app::BindableAttribute__Class** type_info() {
            static app::BindableAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BindableAttribute__Class**)(modloader::win::memory::resolve_rva(0x04701788));
            }
            return cache;
        }
        inline app::BindableAttribute__Class* get_class() {
            return il2cpp::get_class<app::BindableAttribute__Class>(type_info(), "System.ComponentModel", "BindableAttribute");
        }
        inline app::BindableAttribute* create() {
            return il2cpp::create_object<app::BindableAttribute>(get_class());
        }
    } // namespace BindableAttribute
} // namespace app::classes::types
