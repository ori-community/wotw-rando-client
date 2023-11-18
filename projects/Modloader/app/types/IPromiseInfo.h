#pragma once
#include <Modloader/app/structs/IPromiseInfo.h>
#include <Modloader/app/structs/IPromiseInfo__Array.h>
#include <Modloader/app/structs/IPromiseInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPromiseInfo {
        inline app::IPromiseInfo__Class** type_info() {
            static app::IPromiseInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IPromiseInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IPromiseInfo__Class* get_class() {
            return il2cpp::get_class<app::IPromiseInfo__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "IPromiseInfo");
        }
        inline app::IPromiseInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::IPromiseInfo__Array>(get_class(), size);
        }
        inline app::IPromiseInfo__Array* create_array(const std::vector<app::IPromiseInfo*>& items) {
            return il2cpp::array_new<app::IPromiseInfo__Array>(get_class(), items);
        }
    } // namespace IPromiseInfo
} // namespace app::classes::types
