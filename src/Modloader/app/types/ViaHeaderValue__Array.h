#pragma once
#include <Modloader/app/structs/ViaHeaderValue__Array.h>
#include <Modloader/app/structs/ViaHeaderValue__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ViaHeaderValue__Array {
        inline app::ViaHeaderValue__Array__Class** type_info() {
            static app::ViaHeaderValue__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ViaHeaderValue__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ViaHeaderValue__Array__Class* get_class() {
            return il2cpp::get_class<app::ViaHeaderValue__Array__Class>(type_info(), "System.Net.Http.Headers", "ViaHeaderValue[]");
        }
        inline app::ViaHeaderValue__Array* create() {
            return il2cpp::create_object<app::ViaHeaderValue__Array>(get_class());
        }
    } // namespace ViaHeaderValue__Array
} // namespace app::classes::types
