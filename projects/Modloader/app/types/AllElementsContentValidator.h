#pragma once
#include <Modloader/app/structs/AllElementsContentValidator.h>
#include <Modloader/app/structs/AllElementsContentValidator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AllElementsContentValidator {
        inline app::AllElementsContentValidator__Class** type_info() {
            static app::AllElementsContentValidator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AllElementsContentValidator__Class**)(modloader::win::memory::resolve_rva(0x04728DD8));
            }
            return cache;
        }
        inline app::AllElementsContentValidator__Class* get_class() {
            return il2cpp::get_class<app::AllElementsContentValidator__Class>(type_info(), "System.Xml.Schema", "AllElementsContentValidator");
        }
        inline app::AllElementsContentValidator* create() {
            return il2cpp::create_object<app::AllElementsContentValidator>(get_class());
        }
    } // namespace AllElementsContentValidator
} // namespace app::classes::types
