#pragma once
#include <Modloader/app/structs/ICageMetaData.h>
#include <Modloader/app/structs/ICageMetaData__Array.h>
#include <Modloader/app/structs/ICageMetaData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICageMetaData {
        inline app::ICageMetaData__Class** type_info() {
            static app::ICageMetaData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ICageMetaData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ICageMetaData__Class* get_class() {
            return il2cpp::get_class<app::ICageMetaData__Class>(type_info(), "", "ICageMetaData");
        }
        inline app::ICageMetaData__Array* create_array(int size) {
            return il2cpp::array_new<app::ICageMetaData__Array>(get_class(), size);
        }
        inline app::ICageMetaData__Array* create_array(const std::vector<app::ICageMetaData*>& items) {
            return il2cpp::array_new<app::ICageMetaData__Array>(get_class(), items);
        }
    } // namespace ICageMetaData
} // namespace app::classes::types
