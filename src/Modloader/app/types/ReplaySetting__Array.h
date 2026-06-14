#pragma once
#include <Modloader/app/structs/ReplaySetting__Array.h>
#include <Modloader/app/structs/ReplaySetting__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReplaySetting__Array {
        inline app::ReplaySetting__Array__Class** type_info() {
            static app::ReplaySetting__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReplaySetting__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReplaySetting__Array__Class* get_class() {
            return il2cpp::get_class<app::ReplaySetting__Array__Class>(type_info(), "", "ReplaySetting[]");
        }
        inline app::ReplaySetting__Array* create() {
            return il2cpp::create_object<app::ReplaySetting__Array>(get_class());
        }
    } // namespace ReplaySetting__Array
} // namespace app::classes::types
