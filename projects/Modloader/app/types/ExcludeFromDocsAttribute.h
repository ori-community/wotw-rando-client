#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExcludeFromDocsAttribute {
        namespace {
            inline app::ExcludeFromDocsAttribute__Class* type_info_ref = nullptr;
        }
        inline app::ExcludeFromDocsAttribute__Class** type_info = &type_info_ref;
        inline app::ExcludeFromDocsAttribute__Class* get_class() {
            return il2cpp::get_class<app::ExcludeFromDocsAttribute__Class>(type_info, "UnityEngine.Internal", "ExcludeFromDocsAttribute");
        }
        inline app::ExcludeFromDocsAttribute* create() {
            return il2cpp::create_object<app::ExcludeFromDocsAttribute>(get_class());
        }
    } // namespace ExcludeFromDocsAttribute
} // namespace app::classes::types
