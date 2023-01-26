#pragma once
#include <Modloader/app/structs/NameTable_Entry__Array.h>
#include <Modloader/app/structs/NameTable_Entry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NameTable_Entry__Array {
        inline app::NameTable_Entry__Array__Class** type_info() {
            static app::NameTable_Entry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NameTable_Entry__Array__Class**)(modloader::win::memory::resolve_rva(0x04768708));
            }
            return cache;
        }
        inline app::NameTable_Entry__Array__Class* get_class() {
            return il2cpp::get_class<app::NameTable_Entry__Array__Class>(type_info(), "System.Xml", "NameTable+Entry[]");
        }
        inline app::NameTable_Entry__Array* create() {
            return il2cpp::create_object<app::NameTable_Entry__Array>(get_class());
        }
    } // namespace NameTable_Entry__Array
} // namespace app::classes::types
