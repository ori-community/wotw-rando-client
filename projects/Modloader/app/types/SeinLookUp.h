#pragma once
#include <Modloader/app/structs/SeinLookUp.h>
#include <Modloader/app/structs/SeinLookUp__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinLookUp {
        inline app::SeinLookUp__Class** type_info() {
            static app::SeinLookUp__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinLookUp__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinLookUp__Class* get_class() {
            return il2cpp::get_class<app::SeinLookUp__Class>(type_info(), "", "SeinLookUp");
        }
        inline app::SeinLookUp* create() {
            return il2cpp::create_object<app::SeinLookUp>(get_class());
        }
    } // namespace SeinLookUp
} // namespace app::classes::types
