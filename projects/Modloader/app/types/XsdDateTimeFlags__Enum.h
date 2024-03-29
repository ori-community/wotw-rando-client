#pragma once
#include <Modloader/app/structs/XsdDateTimeFlags__Enum.h>
#include <Modloader/app/structs/XsdDateTimeFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XsdDateTimeFlags__Enum {
        inline app::XsdDateTimeFlags__Enum__Class** type_info() {
            static app::XsdDateTimeFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XsdDateTimeFlags__Enum__Class**)(modloader::win::memory::resolve_rva(0x047098A8));
            }
            return cache;
        }
        inline app::XsdDateTimeFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::XsdDateTimeFlags__Enum__Class>(type_info(), "System.Xml.Schema", "XsdDateTimeFlags");
        }
        inline app::XsdDateTimeFlags__Enum* create() {
            return il2cpp::create_object<app::XsdDateTimeFlags__Enum>(get_class());
        }
    } // namespace XsdDateTimeFlags__Enum
} // namespace app::classes::types
