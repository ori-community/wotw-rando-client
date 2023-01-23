#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ICageMetaData__Class.h>
#include <Modloader/app/structs/ICageMetaData__Array.h>
#include <Modloader/app/structs/ICageMetaData.h>

namespace app::classes::types {
    namespace ICageMetaData {
        namespace {
            inline app::ICageMetaData__Class* type_info_ref = nullptr;
        }
        inline app::ICageMetaData__Class** type_info = &type_info_ref;
        inline app::ICageMetaData__Class* get_class() {
            return il2cpp::get_class<app::ICageMetaData__Class>(type_info, "", "ICageMetaData");
        }
        inline app::ICageMetaData__Array* create_array(int size) {
            return il2cpp::array_new<app::ICageMetaData__Array>(get_class(), size);
        }
        inline app::ICageMetaData__Array* create_array(const std::vector<app::ICageMetaData*>& items) {
            return il2cpp::array_new<app::ICageMetaData__Array>(get_class(), items);
        }
    } // namespace ICageMetaData
} // namespace app::classes::types
