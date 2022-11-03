#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateMatcherAttribute {
        namespace {
            inline app::UberStateMatcherAttribute__Class* type_info_ref = nullptr;
        }
        inline app::UberStateMatcherAttribute__Class** type_info = &type_info_ref;
        inline app::UberStateMatcherAttribute__Class* get_class() {
            return il2cpp::get_class<app::UberStateMatcherAttribute__Class>(type_info, "", "UberStateMatcherAttribute");
        }
        inline app::UberStateMatcherAttribute* create() {
            return il2cpp::create_object<app::UberStateMatcherAttribute>(get_class());
        }
    } // namespace UberStateMatcherAttribute
} // namespace app::classes::types
