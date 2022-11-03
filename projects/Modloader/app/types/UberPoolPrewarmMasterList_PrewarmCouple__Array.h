#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberPoolPrewarmMasterList_PrewarmCouple__Array {
        namespace {
            inline app::UberPoolPrewarmMasterList_PrewarmCouple__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberPoolPrewarmMasterList_PrewarmCouple__Array__Class** type_info = &type_info_ref;
        inline app::UberPoolPrewarmMasterList_PrewarmCouple__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPoolPrewarmMasterList_PrewarmCouple__Array__Class>(type_info, "Moon.pooling", "UberPoolPrewarmMasterList+PrewarmCouple[]");
        }
        inline app::UberPoolPrewarmMasterList_PrewarmCouple__Array* create() {
            return il2cpp::create_object<app::UberPoolPrewarmMasterList_PrewarmCouple__Array>(get_class());
        }
    } // namespace UberPoolPrewarmMasterList_PrewarmCouple__Array
} // namespace app::classes::types
