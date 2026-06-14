#pragma once
#include <Modloader/app/structs/ListBindableAttribute.h>
#include <Modloader/app/structs/ListBindableAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListBindableAttribute {
        inline app::ListBindableAttribute__Class** type_info() {
            static app::ListBindableAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListBindableAttribute__Class**)(modloader::win::memory::resolve_rva(0x04756FF8));
            }
            return cache;
        }
        inline app::ListBindableAttribute__Class* get_class() {
            return il2cpp::get_class<app::ListBindableAttribute__Class>(type_info(), "System.ComponentModel", "ListBindableAttribute");
        }
        inline app::ListBindableAttribute* create() {
            return il2cpp::create_object<app::ListBindableAttribute>(get_class());
        }
    } // namespace ListBindableAttribute
} // namespace app::classes::types
