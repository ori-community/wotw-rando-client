#pragma once
#include <Modloader/app/structs/ParsingInfo.h>
#include <Modloader/app/structs/ParsingInfo__Boxed.h>
#include <Modloader/app/structs/ParsingInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParsingInfo {
        inline app::ParsingInfo__Class** type_info() {
            static app::ParsingInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParsingInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParsingInfo__Class* get_class() {
            return il2cpp::get_class<app::ParsingInfo__Class>(type_info(), "System", "ParsingInfo");
        }
        inline app::ParsingInfo* create() {
            return il2cpp::create_object<app::ParsingInfo>(get_class());
        }
        inline app::ParsingInfo__Boxed* box(app::ParsingInfo value) {
            return il2cpp::box_value<app::ParsingInfo__Boxed>(get_class(), value);
        }
    } // namespace ParsingInfo
} // namespace app::classes::types
