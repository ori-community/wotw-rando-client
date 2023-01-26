#pragma once
#include <Modloader/app/structs/UberPoolPrewarmMasterList.h>
#include <Modloader/app/structs/UberPoolPrewarmMasterList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolPrewarmMasterList {
        inline app::UberPoolPrewarmMasterList__Class** type_info() {
            static app::UberPoolPrewarmMasterList__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPoolPrewarmMasterList__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPoolPrewarmMasterList__Class* get_class() {
            return il2cpp::get_class<app::UberPoolPrewarmMasterList__Class>(type_info(), "Moon.pooling", "UberPoolPrewarmMasterList");
        }
        inline app::UberPoolPrewarmMasterList* create() {
            return il2cpp::create_object<app::UberPoolPrewarmMasterList>(get_class());
        }
    } // namespace UberPoolPrewarmMasterList
} // namespace app::classes::types
