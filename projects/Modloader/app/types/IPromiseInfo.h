#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPromiseInfo {
        namespace {
            inline app::IPromiseInfo__Class* type_info_ref = nullptr;
        }
        inline app::IPromiseInfo__Class** type_info = &type_info_ref;
        inline app::IPromiseInfo__Class* get_class() {
            return il2cpp::get_class<app::IPromiseInfo__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "IPromiseInfo");
        }
        inline app::IPromiseInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::IPromiseInfo__Array>(get_class(), size);
        }
        inline app::IPromiseInfo__Array* create_array(const std::vector<app::IPromiseInfo*>& items) {
            return il2cpp::array_new<app::IPromiseInfo__Array>(get_class(), items);
        }
    } // namespace IPromiseInfo
} // namespace app::classes::types
