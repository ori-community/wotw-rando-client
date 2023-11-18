#pragma once
#include <Modloader/app/structs/InternalPrimitiveTypeE__Enum__Array.h>
#include <Modloader/app/structs/InternalPrimitiveTypeE__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InternalPrimitiveTypeE__Enum__Array {
        inline app::InternalPrimitiveTypeE__Enum__Array__Class** type_info() {
            static app::InternalPrimitiveTypeE__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InternalPrimitiveTypeE__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04739AB0));
            }
            return cache;
        }
        inline app::InternalPrimitiveTypeE__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::InternalPrimitiveTypeE__Enum__Array__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "InternalPrimitiveTypeE[]");
        }
        inline app::InternalPrimitiveTypeE__Enum__Array* create() {
            return il2cpp::create_object<app::InternalPrimitiveTypeE__Enum__Array>(get_class());
        }
    } // namespace InternalPrimitiveTypeE__Enum__Array
} // namespace app::classes::types
