#pragma once
#include <Modloader/app/structs/TypeConverterAttribute.h>
#include <Modloader/app/structs/TypeConverterAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeConverterAttribute {
        inline app::TypeConverterAttribute__Class** type_info() {
            static app::TypeConverterAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeConverterAttribute__Class**)(modloader::win::memory::resolve_rva(0x04790090));
            }
            return cache;
        }
        inline app::TypeConverterAttribute__Class* get_class() {
            return il2cpp::get_class<app::TypeConverterAttribute__Class>(type_info(), "System.ComponentModel", "TypeConverterAttribute");
        }
        inline app::TypeConverterAttribute* create() {
            return il2cpp::create_object<app::TypeConverterAttribute>(get_class());
        }
    } // namespace TypeConverterAttribute
} // namespace app::classes::types
