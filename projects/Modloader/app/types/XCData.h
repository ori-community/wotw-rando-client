#pragma once
#include <Modloader/app/structs/XCData.h>
#include <Modloader/app/structs/XCData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XCData {
        inline app::XCData__Class** type_info() {
            static app::XCData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XCData__Class**)(modloader::win::memory::resolve_rva(0x047046D8));
            }
            return cache;
        }
        inline app::XCData__Class* get_class() {
            return il2cpp::get_class<app::XCData__Class>(type_info(), "System.Xml.Linq", "XCData");
        }
        inline app::XCData* create() {
            return il2cpp::create_object<app::XCData>(get_class());
        }
    } // namespace XCData
} // namespace app::classes::types
