#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlToDatasetMap__Class.h>
#include <Modloader/app/structs/XmlToDatasetMap.h>

namespace app::classes::types {
    namespace XmlToDatasetMap {
        inline app::XmlToDatasetMap__Class** type_info = (app::XmlToDatasetMap__Class**)(modloader::win::memory::resolve_rva(0x04746090));
        inline app::XmlToDatasetMap__Class* get_class() {
            return il2cpp::get_class<app::XmlToDatasetMap__Class>(type_info, "System.Data", "XmlToDatasetMap");
        }
        inline app::XmlToDatasetMap* create() {
            return il2cpp::create_object<app::XmlToDatasetMap>(get_class());
        }
    } // namespace XmlToDatasetMap
} // namespace app::classes::types
