#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberPoolPrewarmMasterList_PrewarmConfig__Array__Class.h>
#include <Modloader/app/structs/UberPoolPrewarmMasterList_PrewarmConfig__Array.h>

namespace app::classes::types {
    namespace UberPoolPrewarmMasterList_PrewarmConfig__Array {
        namespace {
            inline app::UberPoolPrewarmMasterList_PrewarmConfig__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberPoolPrewarmMasterList_PrewarmConfig__Array__Class** type_info = &type_info_ref;
        inline app::UberPoolPrewarmMasterList_PrewarmConfig__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPoolPrewarmMasterList_PrewarmConfig__Array__Class>(type_info, "Moon.pooling", "UberPoolPrewarmMasterList+PrewarmConfig[]");
        }
        inline app::UberPoolPrewarmMasterList_PrewarmConfig__Array* create() {
            return il2cpp::create_object<app::UberPoolPrewarmMasterList_PrewarmConfig__Array>(get_class());
        }
    } // namespace UberPoolPrewarmMasterList_PrewarmConfig__Array
} // namespace app::classes::types
