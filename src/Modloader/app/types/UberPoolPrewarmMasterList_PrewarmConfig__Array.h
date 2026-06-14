#pragma once
#include <Modloader/app/structs/UberPoolPrewarmMasterList_PrewarmConfig__Array.h>
#include <Modloader/app/structs/UberPoolPrewarmMasterList_PrewarmConfig__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolPrewarmMasterList_PrewarmConfig__Array {
        inline app::UberPoolPrewarmMasterList_PrewarmConfig__Array__Class** type_info() {
            static app::UberPoolPrewarmMasterList_PrewarmConfig__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPoolPrewarmMasterList_PrewarmConfig__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPoolPrewarmMasterList_PrewarmConfig__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPoolPrewarmMasterList_PrewarmConfig__Array__Class>(type_info(), "Moon.pooling", "UberPoolPrewarmMasterList+PrewarmConfig[]");
        }
        inline app::UberPoolPrewarmMasterList_PrewarmConfig__Array* create() {
            return il2cpp::create_object<app::UberPoolPrewarmMasterList_PrewarmConfig__Array>(get_class());
        }
    } // namespace UberPoolPrewarmMasterList_PrewarmConfig__Array
} // namespace app::classes::types
