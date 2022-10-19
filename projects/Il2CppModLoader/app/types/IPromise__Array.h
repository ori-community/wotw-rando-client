#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPromise__Array {
        namespace {
            inline app::IPromise__Array__Class* type_info_ref = nullptr;
        }
        inline app::IPromise__Array__Class** type_info = &type_info_ref;
        inline app::IPromise__Array__Class* get_class() {
            return il2cpp::get_class<app::IPromise__Array__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "IPromise[]");
        }
        inline app::IPromise__Array* create() {
            return il2cpp::create_object<app::IPromise__Array>(get_class());
        }
    } // namespace IPromise__Array
} // namespace app::classes::types
