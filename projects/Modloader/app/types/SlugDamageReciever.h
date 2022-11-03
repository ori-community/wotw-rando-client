#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SlugDamageReciever {
        namespace {
            inline app::SlugDamageReciever__Class* type_info_ref = nullptr;
        }
        inline app::SlugDamageReciever__Class** type_info = &type_info_ref;
        inline app::SlugDamageReciever__Class* get_class() {
            return il2cpp::get_class<app::SlugDamageReciever__Class>(type_info, "", "SlugDamageReciever");
        }
        inline app::SlugDamageReciever* create() {
            return il2cpp::create_object<app::SlugDamageReciever>(get_class());
        }
    } // namespace SlugDamageReciever
} // namespace app::classes::types
