#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlCharacterData__Class.h>
#include <Modloader/app/structs/XmlCharacterData.h>

namespace app::classes::types {
    namespace XmlCharacterData {
        namespace {
            inline app::XmlCharacterData__Class* type_info_ref = nullptr;
        }
        inline app::XmlCharacterData__Class** type_info = &type_info_ref;
        inline app::XmlCharacterData__Class* get_class() {
            return il2cpp::get_class<app::XmlCharacterData__Class>(type_info, "System.Xml", "XmlCharacterData");
        }
        inline app::XmlCharacterData* create() {
            return il2cpp::create_object<app::XmlCharacterData>(get_class());
        }
    } // namespace XmlCharacterData
} // namespace app::classes::types
