#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HeaderInfo_1 {
        namespace {
            inline app::HeaderInfo_1__Class* type_info_ref = nullptr;
        }
        inline app::HeaderInfo_1__Class** type_info = &type_info_ref;
        inline app::HeaderInfo_1__Class* get_class() {
            return il2cpp::get_class<app::HeaderInfo_1__Class>(type_info, "System.Net.Http.Headers", "HeaderInfo");
        }
        inline app::HeaderInfo_1* create() {
            return il2cpp::create_object<app::HeaderInfo_1>(get_class());
        }
        inline app::HeaderInfo_1__Array* create_array(int size) {
            return il2cpp::array_new<app::HeaderInfo_1__Array>(get_class(), size);
        }
        inline app::HeaderInfo_1__Array* create_array(const std::vector<app::HeaderInfo_1*>& items) {
            return il2cpp::array_new<app::HeaderInfo_1__Array>(get_class(), items);
        }
    } // namespace HeaderInfo_1
} // namespace app::classes::types
