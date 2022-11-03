#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SerializationSource {
        namespace {
            inline app::SerializationSource__Class* type_info_ref = nullptr;
        }
        inline app::SerializationSource__Class** type_info = &type_info_ref;
        inline app::SerializationSource__Class* get_class() {
            return il2cpp::get_class<app::SerializationSource__Class>(type_info, "System.Xml.Serialization", "SerializationSource");
        }
        inline app::SerializationSource* create() {
            return il2cpp::create_object<app::SerializationSource>(get_class());
        }
    } // namespace SerializationSource
} // namespace app::classes::types
