#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPromiseInfo {
        namespace {
            app::IPromiseInfo__Class* type_info_ref = nullptr;
        }
        app::IPromiseInfo__Class** type_info = &type_info_ref;
        inline app::IPromiseInfo__Class* get_class() {
            return il2cpp::get_class<app::IPromiseInfo__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "IPromiseInfo");
        }
        inline app::IPromiseInfo* create() {
            return il2cpp::create_object<app::IPromiseInfo>(get_class());
        }
        inline app::IPromiseInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::IPromiseInfo__Array>(get_class(), size);
        }
    } // namespace IPromiseInfo
} // namespace app::classes::types
