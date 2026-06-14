#pragma once
#include <Modloader/app/structs/Uri_MoreInfo.h>
#include <Modloader/app/structs/Uri_MoreInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Uri_MoreInfo {
        inline app::Uri_MoreInfo__Class** type_info() {
            static app::Uri_MoreInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Uri_MoreInfo__Class**)(modloader::win::memory::resolve_rva(0x0476D668));
            }
            return cache;
        }
        inline app::Uri_MoreInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::Uri_MoreInfo__Class>(type_info(), "System", "Uri", "MoreInfo");
        }
        inline app::Uri_MoreInfo* create() {
            return il2cpp::create_object<app::Uri_MoreInfo>(get_class());
        }
    } // namespace Uri_MoreInfo
} // namespace app::classes::types
