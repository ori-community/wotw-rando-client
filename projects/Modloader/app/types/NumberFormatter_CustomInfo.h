#pragma once
#include <Modloader/app/structs/NumberFormatter_CustomInfo.h>
#include <Modloader/app/structs/NumberFormatter_CustomInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NumberFormatter_CustomInfo {
        inline app::NumberFormatter_CustomInfo__Class** type_info() {
            static app::NumberFormatter_CustomInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NumberFormatter_CustomInfo__Class**)(modloader::win::memory::resolve_rva(0x047349C0));
            }
            return cache;
        }
        inline app::NumberFormatter_CustomInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::NumberFormatter_CustomInfo__Class>(type_info(), "System", "NumberFormatter", "CustomInfo");
        }
        inline app::NumberFormatter_CustomInfo* create() {
            return il2cpp::create_object<app::NumberFormatter_CustomInfo>(get_class());
        }
    } // namespace NumberFormatter_CustomInfo
} // namespace app::classes::types
