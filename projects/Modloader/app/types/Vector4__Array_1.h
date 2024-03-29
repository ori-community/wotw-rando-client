#pragma once
#include <Modloader/app/structs/Vector4__Array_1.h>
#include <Modloader/app/structs/Vector4__Array_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Vector4__Array_1 {
        inline app::Vector4__Array_1__Class** type_info() {
            static app::Vector4__Array_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Vector4__Array_1__Class**)(modloader::win::memory::resolve_rva(0x04774368));
            }
            return cache;
        }
        inline app::Vector4__Array_1__Class* get_class() {
            return il2cpp::get_class<app::Vector4__Array_1__Class>(type_info(), "UnityEngine", "Vector4[,]");
        }
        inline app::Vector4__Array_1* create() {
            return il2cpp::create_object<app::Vector4__Array_1>(get_class());
        }
    } // namespace Vector4__Array_1
} // namespace app::classes::types
