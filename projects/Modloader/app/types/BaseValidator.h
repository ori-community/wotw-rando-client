#pragma once
#include <Modloader/app/structs/BaseValidator.h>
#include <Modloader/app/structs/BaseValidator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseValidator {
        inline app::BaseValidator__Class** type_info() {
            static app::BaseValidator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BaseValidator__Class**)(modloader::win::memory::resolve_rva(0x047099C0));
            }
            return cache;
        }
        inline app::BaseValidator__Class* get_class() {
            return il2cpp::get_class<app::BaseValidator__Class>(type_info(), "System.Xml.Schema", "BaseValidator");
        }
        inline app::BaseValidator* create() {
            return il2cpp::create_object<app::BaseValidator>(get_class());
        }
    } // namespace BaseValidator
} // namespace app::classes::types
