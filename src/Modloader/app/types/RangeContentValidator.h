#pragma once
#include <Modloader/app/structs/RangeContentValidator.h>
#include <Modloader/app/structs/RangeContentValidator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RangeContentValidator {
        inline app::RangeContentValidator__Class** type_info() {
            static app::RangeContentValidator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RangeContentValidator__Class**)(modloader::win::memory::resolve_rva(0x04770790));
            }
            return cache;
        }
        inline app::RangeContentValidator__Class* get_class() {
            return il2cpp::get_class<app::RangeContentValidator__Class>(type_info(), "System.Xml.Schema", "RangeContentValidator");
        }
        inline app::RangeContentValidator* create() {
            return il2cpp::create_object<app::RangeContentValidator>(get_class());
        }
    } // namespace RangeContentValidator
} // namespace app::classes::types
