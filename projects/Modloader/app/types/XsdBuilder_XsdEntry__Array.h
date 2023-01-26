#pragma once
#include <Modloader/app/structs/XsdBuilder_XsdEntry__Array.h>
#include <Modloader/app/structs/XsdBuilder_XsdEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XsdBuilder_XsdEntry__Array {
        inline app::XsdBuilder_XsdEntry__Array__Class** type_info() {
            static app::XsdBuilder_XsdEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XsdBuilder_XsdEntry__Array__Class**)(modloader::win::memory::resolve_rva(0x047152E8));
            }
            return cache;
        }
        inline app::XsdBuilder_XsdEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::XsdBuilder_XsdEntry__Array__Class>(type_info(), "System.Xml.Schema", "XsdBuilder+XsdEntry[]");
        }
        inline app::XsdBuilder_XsdEntry__Array* create() {
            return il2cpp::create_object<app::XsdBuilder_XsdEntry__Array>(get_class());
        }
    } // namespace XsdBuilder_XsdEntry__Array
} // namespace app::classes::types
