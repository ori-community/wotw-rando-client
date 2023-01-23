#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TypeTranslator__Class.h>
#include <Modloader/app/structs/TypeTranslator.h>

namespace app::classes::types {
    namespace TypeTranslator {
        inline app::TypeTranslator__Class** type_info = (app::TypeTranslator__Class**)(modloader::win::memory::resolve_rva(0x04761B58));
        inline app::TypeTranslator__Class* get_class() {
            return il2cpp::get_class<app::TypeTranslator__Class>(type_info, "System.Xml.Serialization", "TypeTranslator");
        }
        inline app::TypeTranslator* create() {
            return il2cpp::create_object<app::TypeTranslator>(get_class());
        }
    } // namespace TypeTranslator
} // namespace app::classes::types
