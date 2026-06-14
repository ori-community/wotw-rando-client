#pragma once
#include <Modloader/app/structs/XmlNodeReaderNavigator.h>
#include <Modloader/app/structs/XmlNodeReaderNavigator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlNodeReaderNavigator {
        inline app::XmlNodeReaderNavigator__Class** type_info() {
            static app::XmlNodeReaderNavigator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlNodeReaderNavigator__Class**)(modloader::win::memory::resolve_rva(0x04712BD0));
            }
            return cache;
        }
        inline app::XmlNodeReaderNavigator__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeReaderNavigator__Class>(type_info(), "System.Xml", "XmlNodeReaderNavigator");
        }
        inline app::XmlNodeReaderNavigator* create() {
            return il2cpp::create_object<app::XmlNodeReaderNavigator>(get_class());
        }
    } // namespace XmlNodeReaderNavigator
} // namespace app::classes::types
