#pragma once
#include <Modloader/app/structs/PositionInfo.h>
#include <Modloader/app/structs/PositionInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PositionInfo {
        inline app::PositionInfo__Class** type_info() {
            static app::PositionInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PositionInfo__Class**)(modloader::win::memory::resolve_rva(0x04790F70));
            }
            return cache;
        }
        inline app::PositionInfo__Class* get_class() {
            return il2cpp::get_class<app::PositionInfo__Class>(type_info(), "System.Xml", "PositionInfo");
        }
        inline app::PositionInfo* create() {
            return il2cpp::create_object<app::PositionInfo>(get_class());
        }
    } // namespace PositionInfo
} // namespace app::classes::types
