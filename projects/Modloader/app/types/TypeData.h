#pragma once
#include <Modloader/app/structs/TypeData.h>
#include <Modloader/app/structs/TypeData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeData {
        inline app::TypeData__Class** type_info() {
            static app::TypeData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeData__Class**)(modloader::win::memory::resolve_rva(0x04769FD8));
            }
            return cache;
        }
        inline app::TypeData__Class* get_class() {
            return il2cpp::get_class<app::TypeData__Class>(type_info(), "System.Xml.Serialization", "TypeData");
        }
        inline app::TypeData* create() {
            return il2cpp::create_object<app::TypeData>(get_class());
        }
    } // namespace TypeData
} // namespace app::classes::types
