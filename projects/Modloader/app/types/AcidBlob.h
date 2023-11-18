#pragma once
#include <Modloader/app/structs/AcidBlob.h>
#include <Modloader/app/structs/AcidBlob__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AcidBlob {
        inline app::AcidBlob__Class** type_info() {
            static app::AcidBlob__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AcidBlob__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AcidBlob__Class* get_class() {
            return il2cpp::get_class<app::AcidBlob__Class>(type_info(), "", "AcidBlob");
        }
        inline app::AcidBlob* create() {
            return il2cpp::create_object<app::AcidBlob>(get_class());
        }
    } // namespace AcidBlob
} // namespace app::classes::types
