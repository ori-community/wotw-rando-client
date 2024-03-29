#pragma once
#include <Modloader/app/structs/XsdValidator.h>
#include <Modloader/app/structs/XsdValidator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XsdValidator {
        inline app::XsdValidator__Class** type_info() {
            static app::XsdValidator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XsdValidator__Class**)(modloader::win::memory::resolve_rva(0x04727AF8));
            }
            return cache;
        }
        inline app::XsdValidator__Class* get_class() {
            return il2cpp::get_class<app::XsdValidator__Class>(type_info(), "System.Xml.Schema", "XsdValidator");
        }
        inline app::XsdValidator* create() {
            return il2cpp::create_object<app::XsdValidator>(get_class());
        }
    } // namespace XsdValidator
} // namespace app::classes::types
