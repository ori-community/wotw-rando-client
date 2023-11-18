#pragma once
#include <Modloader/app/structs/CompareInfo.h>
#include <Modloader/app/structs/CompareInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompareInfo {
        inline app::CompareInfo__Class** type_info() {
            static app::CompareInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CompareInfo__Class**)(modloader::win::memory::resolve_rva(0x04725A60));
            }
            return cache;
        }
        inline app::CompareInfo__Class* get_class() {
            return il2cpp::get_class<app::CompareInfo__Class>(type_info(), "System.Globalization", "CompareInfo");
        }
        inline app::CompareInfo* create() {
            return il2cpp::create_object<app::CompareInfo>(get_class());
        }
    } // namespace CompareInfo
} // namespace app::classes::types
