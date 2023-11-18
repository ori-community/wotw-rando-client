#pragma once
#include <Modloader/app/structs/XmlNameEx.h>
#include <Modloader/app/structs/XmlNameEx__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlNameEx {
        inline app::XmlNameEx__Class** type_info() {
            static app::XmlNameEx__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlNameEx__Class**)(modloader::win::memory::resolve_rva(0x0474B7D0));
            }
            return cache;
        }
        inline app::XmlNameEx__Class* get_class() {
            return il2cpp::get_class<app::XmlNameEx__Class>(type_info(), "System.Xml", "XmlNameEx");
        }
        inline app::XmlNameEx* create() {
            return il2cpp::create_object<app::XmlNameEx>(get_class());
        }
    } // namespace XmlNameEx
} // namespace app::classes::types
