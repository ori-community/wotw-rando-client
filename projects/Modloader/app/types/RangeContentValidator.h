#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RangeContentValidator {
        inline app::RangeContentValidator__Class** type_info = (app::RangeContentValidator__Class**)(modloader::win::memory::resolve_rva(0x04770790));
        inline app::RangeContentValidator__Class* get_class() {
            return il2cpp::get_class<app::RangeContentValidator__Class>(type_info, "System.Xml.Schema", "RangeContentValidator");
        }
        inline app::RangeContentValidator* create() {
            return il2cpp::create_object<app::RangeContentValidator>(get_class());
        }
    } // namespace RangeContentValidator
} // namespace app::classes::types
