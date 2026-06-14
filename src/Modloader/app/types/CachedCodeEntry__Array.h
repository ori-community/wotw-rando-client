#pragma once
#include <Modloader/app/structs/CachedCodeEntry__Array.h>
#include <Modloader/app/structs/CachedCodeEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CachedCodeEntry__Array {
        inline app::CachedCodeEntry__Array__Class** type_info() {
            static app::CachedCodeEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CachedCodeEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CachedCodeEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::CachedCodeEntry__Array__Class>(type_info(), "System.Text.RegularExpressions", "CachedCodeEntry[]");
        }
        inline app::CachedCodeEntry__Array* create() {
            return il2cpp::create_object<app::CachedCodeEntry__Array>(get_class());
        }
    } // namespace CachedCodeEntry__Array
} // namespace app::classes::types
