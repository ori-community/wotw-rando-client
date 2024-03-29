#pragma once
#include <Modloader/app/structs/XSDSchema_NameType__Array.h>
#include <Modloader/app/structs/XSDSchema_NameType__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XSDSchema_NameType__Array {
        inline app::XSDSchema_NameType__Array__Class** type_info() {
            static app::XSDSchema_NameType__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XSDSchema_NameType__Array__Class**)(modloader::win::memory::resolve_rva(0x04705468));
            }
            return cache;
        }
        inline app::XSDSchema_NameType__Array__Class* get_class() {
            return il2cpp::get_class<app::XSDSchema_NameType__Array__Class>(type_info(), "System.Data", "XSDSchema+NameType[]");
        }
        inline app::XSDSchema_NameType__Array* create() {
            return il2cpp::create_object<app::XSDSchema_NameType__Array>(get_class());
        }
    } // namespace XSDSchema_NameType__Array
} // namespace app::classes::types
