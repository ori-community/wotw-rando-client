#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StaticEntityGenericIdleBehaviour {
        namespace {
            inline app::StaticEntityGenericIdleBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::StaticEntityGenericIdleBehaviour__Class** type_info = &type_info_ref;
        inline app::StaticEntityGenericIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::StaticEntityGenericIdleBehaviour__Class>(type_info, "", "StaticEntityGenericIdleBehaviour");
        }
        inline app::StaticEntityGenericIdleBehaviour* create() {
            return il2cpp::create_object<app::StaticEntityGenericIdleBehaviour>(get_class());
        }
    } // namespace StaticEntityGenericIdleBehaviour
} // namespace app::classes::types
