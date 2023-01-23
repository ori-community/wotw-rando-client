#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PositionInfo__Class.h>
#include <Modloader/app/structs/PositionInfo.h>

namespace app::classes::types {
    namespace PositionInfo {
        inline app::PositionInfo__Class** type_info = (app::PositionInfo__Class**)(modloader::win::memory::resolve_rva(0x04790F70));
        inline app::PositionInfo__Class* get_class() {
            return il2cpp::get_class<app::PositionInfo__Class>(type_info, "System.Xml", "PositionInfo");
        }
        inline app::PositionInfo* create() {
            return il2cpp::create_object<app::PositionInfo>(get_class());
        }
    } // namespace PositionInfo
} // namespace app::classes::types
