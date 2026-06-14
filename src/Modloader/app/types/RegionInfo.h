#pragma once
#include <Modloader/app/structs/RegionInfo.h>
#include <Modloader/app/structs/RegionInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegionInfo {
        inline app::RegionInfo__Class** type_info() {
            static app::RegionInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RegionInfo__Class**)(modloader::win::memory::resolve_rva(0x0471BF00));
            }
            return cache;
        }
        inline app::RegionInfo__Class* get_class() {
            return il2cpp::get_class<app::RegionInfo__Class>(type_info(), "System.Globalization", "RegionInfo");
        }
        inline app::RegionInfo* create() {
            return il2cpp::create_object<app::RegionInfo>(get_class());
        }
    } // namespace RegionInfo
} // namespace app::classes::types
