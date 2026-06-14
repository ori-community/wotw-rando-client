#pragma once
#include <Modloader/app/structs/SByteConverter.h>
#include <Modloader/app/structs/SByteConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SByteConverter {
        inline app::SByteConverter__Class** type_info() {
            static app::SByteConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SByteConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SByteConverter__Class* get_class() {
            return il2cpp::get_class<app::SByteConverter__Class>(type_info(), "System.ComponentModel", "SByteConverter");
        }
        inline app::SByteConverter* create() {
            return il2cpp::create_object<app::SByteConverter>(get_class());
        }
    } // namespace SByteConverter
} // namespace app::classes::types
