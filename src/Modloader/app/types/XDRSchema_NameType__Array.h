#pragma once
#include <Modloader/app/structs/XDRSchema_NameType__Array.h>
#include <Modloader/app/structs/XDRSchema_NameType__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XDRSchema_NameType__Array {
        inline app::XDRSchema_NameType__Array__Class** type_info() {
            static app::XDRSchema_NameType__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XDRSchema_NameType__Array__Class**)(modloader::win::memory::resolve_rva(0x047337F8));
            }
            return cache;
        }
        inline app::XDRSchema_NameType__Array__Class* get_class() {
            return il2cpp::get_class<app::XDRSchema_NameType__Array__Class>(type_info(), "System.Data", "XDRSchema+NameType[]");
        }
        inline app::XDRSchema_NameType__Array* create() {
            return il2cpp::create_object<app::XDRSchema_NameType__Array>(get_class());
        }
    } // namespace XDRSchema_NameType__Array
} // namespace app::classes::types
