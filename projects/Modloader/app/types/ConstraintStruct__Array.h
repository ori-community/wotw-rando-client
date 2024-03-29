#pragma once
#include <Modloader/app/structs/ConstraintStruct__Array.h>
#include <Modloader/app/structs/ConstraintStruct__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConstraintStruct__Array {
        inline app::ConstraintStruct__Array__Class** type_info() {
            static app::ConstraintStruct__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConstraintStruct__Array__Class**)(modloader::win::memory::resolve_rva(0x0472D178));
            }
            return cache;
        }
        inline app::ConstraintStruct__Array__Class* get_class() {
            return il2cpp::get_class<app::ConstraintStruct__Array__Class>(type_info(), "System.Xml.Schema", "ConstraintStruct[]");
        }
        inline app::ConstraintStruct__Array* create() {
            return il2cpp::create_object<app::ConstraintStruct__Array>(get_class());
        }
    } // namespace ConstraintStruct__Array
} // namespace app::classes::types
