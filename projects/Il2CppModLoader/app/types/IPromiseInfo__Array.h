#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPromiseInfo__Array {
        namespace {
            inline app::IPromiseInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::IPromiseInfo__Array__Class** type_info = &type_info_ref;
        inline app::IPromiseInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::IPromiseInfo__Array__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "IPromiseInfo[]");
        }
        inline app::IPromiseInfo__Array* create() {
            return il2cpp::create_object<app::IPromiseInfo__Array>(get_class());
        }
    } // namespace IPromiseInfo__Array
} // namespace app::classes::types
