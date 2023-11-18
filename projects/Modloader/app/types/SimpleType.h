#pragma once
#include <Modloader/app/structs/SimpleType.h>
#include <Modloader/app/structs/SimpleType__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleType {
        inline app::SimpleType__Class** type_info() {
            static app::SimpleType__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SimpleType__Class**)(modloader::win::memory::resolve_rva(0x04770378));
            }
            return cache;
        }
        inline app::SimpleType__Class* get_class() {
            return il2cpp::get_class<app::SimpleType__Class>(type_info(), "System.Data", "SimpleType");
        }
        inline app::SimpleType* create() {
            return il2cpp::create_object<app::SimpleType>(get_class());
        }
    } // namespace SimpleType
} // namespace app::classes::types
