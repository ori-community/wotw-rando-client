#pragma once
#include <Modloader/app/structs/CustomAttributeFormatException.h>
#include <Modloader/app/structs/CustomAttributeFormatException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CustomAttributeFormatException {
        inline app::CustomAttributeFormatException__Class** type_info() {
            static app::CustomAttributeFormatException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CustomAttributeFormatException__Class**)(modloader::win::memory::resolve_rva(0x04787068));
            }
            return cache;
        }
        inline app::CustomAttributeFormatException__Class* get_class() {
            return il2cpp::get_class<app::CustomAttributeFormatException__Class>(type_info(), "System.Reflection", "CustomAttributeFormatException");
        }
        inline app::CustomAttributeFormatException* create() {
            return il2cpp::create_object<app::CustomAttributeFormatException>(get_class());
        }
    } // namespace CustomAttributeFormatException
} // namespace app::classes::types
