#pragma once
#include <Modloader/app/structs/CleverMenuItem__Array.h>
#include <Modloader/app/structs/CleverMenuItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItem__Array {
        inline app::CleverMenuItem__Array__Class** type_info() {
            static app::CleverMenuItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CleverMenuItem__Array__Class**)(modloader::win::memory::resolve_rva(0x0470E5F0));
            }
            return cache;
        }
        inline app::CleverMenuItem__Array__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuItem__Array__Class>(type_info(), "", "CleverMenuItem[]");
        }
        inline app::CleverMenuItem__Array* create() {
            return il2cpp::create_object<app::CleverMenuItem__Array>(get_class());
        }
    } // namespace CleverMenuItem__Array
} // namespace app::classes::types
