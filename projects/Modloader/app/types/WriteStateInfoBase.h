#pragma once
#include <Modloader/app/structs/WriteStateInfoBase.h>
#include <Modloader/app/structs/WriteStateInfoBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WriteStateInfoBase {
        inline app::WriteStateInfoBase__Class** type_info() {
            static app::WriteStateInfoBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WriteStateInfoBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WriteStateInfoBase__Class* get_class() {
            return il2cpp::get_class<app::WriteStateInfoBase__Class>(type_info(), "System.Net.Mime", "WriteStateInfoBase");
        }
        inline app::WriteStateInfoBase* create() {
            return il2cpp::create_object<app::WriteStateInfoBase>(get_class());
        }
    } // namespace WriteStateInfoBase
} // namespace app::classes::types
