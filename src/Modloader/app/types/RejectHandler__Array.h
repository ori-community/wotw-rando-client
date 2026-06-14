#pragma once
#include <Modloader/app/structs/RejectHandler__Array.h>
#include <Modloader/app/structs/RejectHandler__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RejectHandler__Array {
        inline app::RejectHandler__Array__Class** type_info() {
            static app::RejectHandler__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RejectHandler__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RejectHandler__Array__Class* get_class() {
            return il2cpp::get_class<app::RejectHandler__Array__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "RejectHandler[]");
        }
        inline app::RejectHandler__Array* create() {
            return il2cpp::create_object<app::RejectHandler__Array>(get_class());
        }
    } // namespace RejectHandler__Array
} // namespace app::classes::types
