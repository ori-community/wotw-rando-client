#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateMatcherDrawerAttribute {
        namespace {
            inline app::UberStateMatcherDrawerAttribute__Class* type_info_ref = nullptr;
        }
        inline app::UberStateMatcherDrawerAttribute__Class** type_info = &type_info_ref;
        inline app::UberStateMatcherDrawerAttribute__Class* get_class() {
            return il2cpp::get_class<app::UberStateMatcherDrawerAttribute__Class>(type_info, "", "UberStateMatcherDrawerAttribute");
        }
        inline app::UberStateMatcherDrawerAttribute* create() {
            return il2cpp::create_object<app::UberStateMatcherDrawerAttribute>(get_class());
        }
    } // namespace UberStateMatcherDrawerAttribute
} // namespace app::classes::types
