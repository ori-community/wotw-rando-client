#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberPoolPrewarmMasterList_PrewarmCouple__Class.h>
#include <Modloader/app/structs/UberPoolPrewarmMasterList_PrewarmCouple.h>
#include <Modloader/app/structs/UberPoolPrewarmMasterList_PrewarmCouple__Array.h>

namespace app::classes::types {
    namespace UberPoolPrewarmMasterList_PrewarmCouple {
        namespace {
            inline app::UberPoolPrewarmMasterList_PrewarmCouple__Class* type_info_ref = nullptr;
        }
        inline app::UberPoolPrewarmMasterList_PrewarmCouple__Class** type_info = &type_info_ref;
        inline app::UberPoolPrewarmMasterList_PrewarmCouple__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPrewarmMasterList_PrewarmCouple__Class>(type_info, "Moon.pooling", "UberPoolPrewarmMasterList", "PrewarmCouple");
        }
        inline app::UberPoolPrewarmMasterList_PrewarmCouple* create() {
            return il2cpp::create_object<app::UberPoolPrewarmMasterList_PrewarmCouple>(get_class());
        }
        inline app::UberPoolPrewarmMasterList_PrewarmCouple__Array* create_array(int size) {
            return il2cpp::array_new<app::UberPoolPrewarmMasterList_PrewarmCouple__Array>(get_class(), size);
        }
        inline app::UberPoolPrewarmMasterList_PrewarmCouple__Array* create_array(const std::vector<app::UberPoolPrewarmMasterList_PrewarmCouple*>& items) {
            return il2cpp::array_new<app::UberPoolPrewarmMasterList_PrewarmCouple__Array>(get_class(), items);
        }
    } // namespace UberPoolPrewarmMasterList_PrewarmCouple
} // namespace app::classes::types
