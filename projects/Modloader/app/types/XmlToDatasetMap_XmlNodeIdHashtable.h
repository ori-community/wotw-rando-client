#pragma once
#include <Modloader/app/structs/XmlToDatasetMap_XmlNodeIdHashtable.h>
#include <Modloader/app/structs/XmlToDatasetMap_XmlNodeIdHashtable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlToDatasetMap_XmlNodeIdHashtable {
        inline app::XmlToDatasetMap_XmlNodeIdHashtable__Class** type_info() {
            static app::XmlToDatasetMap_XmlNodeIdHashtable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlToDatasetMap_XmlNodeIdHashtable__Class**)(modloader::win::memory::resolve_rva(0x04776598));
            }
            return cache;
        }
        inline app::XmlToDatasetMap_XmlNodeIdHashtable__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlToDatasetMap_XmlNodeIdHashtable__Class>(type_info(), "System.Data", "XmlToDatasetMap", "XmlNodeIdHashtable");
        }
        inline app::XmlToDatasetMap_XmlNodeIdHashtable* create() {
            return il2cpp::create_object<app::XmlToDatasetMap_XmlNodeIdHashtable>(get_class());
        }
    } // namespace XmlToDatasetMap_XmlNodeIdHashtable
} // namespace app::classes::types
